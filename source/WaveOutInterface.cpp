#include "WaveOutInterface.hpp"

#include <iostream>

void WaveOutInterface::initialize()
{
	bufIndex = 0;
	freeBlocks = numBlocks = 8; 
	numSamples = 512;
	blockCallback = nullptr;
	
	//Initialize wave format
	WAVEFORMATEX waveFormat;
	waveFormat.wFormatTag = WAVE_FORMAT_PCM;
	waveFormat.nSamplesPerSec = 44100;
	waveFormat.wBitsPerSample = sizeof(short) * 8;
	waveFormat.nChannels = 1;
	waveFormat.nBlockAlign = (waveFormat.wBitsPerSample / 8) * waveFormat.nChannels;
	waveFormat.nAvgBytesPerSec = waveFormat.nSamplesPerSec * waveFormat.nBlockAlign;
	waveFormat.cbSize = sizeof(WAVEFORMATEX);
	
	//Open device
	waveOutOpen(&device, 0, &waveFormat, (DWORD_PTR) &WaveOutInterface::waveOutProc, (DWORD_PTR) nullptr, CALLBACK_FUNCTION);
			
	//Allocate block buffer
	buffer = new short[numBlocks * numSamples];
	ZeroMemory(buffer, sizeof(short) * numBlocks * numSamples);	
	
	//Allocate block headers
	headers = new WAVEHDR[numBlocks];
	ZeroMemory(headers, sizeof(WAVEHDR) * numBlocks);

	// Link headers to block memory
	for (unsigned int n = 0; n < numBlocks; n++)
	{
		headers[n].dwBufferLength = numSamples * sizeof(short);
		headers[n].lpData = (LPSTR)(buffer + (n * numSamples));
	}
	
	running = true;
	pthread_create(&streamThread, NULL, &WaveOutInterface::blockThread, nullptr);
}

void WaveOutInterface::close()
{	
	running = false;
	//Join thread
	pthread_join(streamThread, NULL);
	pthread_exit(NULL);
	
	//Delete block memory
	delete [] buffer;
	delete [] headers;
}

static void CALLBACK WaveOutInterface::waveOutProc(HWAVEOUT hWaveOut, UINT uMsg, DWORD_PTR instance, DWORD_PTR dwParam1, DWORD_PTR dwParam2)
{
	if (uMsg != WOM_DONE) return;
	freeBlocks++;
}

void WaveOutInterface::setBlockFunction(std::function<void(short*)> bf) { blockCallback = bf; }

bool WaveOutInterface::isBuffering() { return freeBlocks > 3; }
