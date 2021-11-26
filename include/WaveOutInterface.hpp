#ifndef WAVEOUTINTERFACE
#define WAVEOUTINTERFACE

#include <cmath>
#include <fstream>
#include <string>
#include <atomic>
#include <condition_variable>
#include <chrono>
#include <mutex>
#include <functional>

#include <Windows.h>
#include <pthread.h>

class Synth;

namespace WaveOutInterface
{
	namespace
	{
		std::function<void(short*)> blockCallback = nullptr;
		WAVEHDR* headers;
		HWAVEOUT device;
		short* buffer;
		int numBlocks, numSamples, freeBlocks, bufIndex;
		pthread_t streamThread;
		bool running;
		
		void* blockThread(void*)
		{
			while (running)
			{
				//Wait for free block
				while (freeBlocks == 0);
				freeBlocks--;
		
				//Run block callback and copy into buffer
				if (blockCallback != nullptr) blockCallback(buffer+bufIndex*numSamples);

				//Prepare block
				if (headers[bufIndex].dwFlags & WHDR_PREPARED)
					waveOutUnprepareHeader(device, &headers[bufIndex], sizeof(WAVEHDR));

				//Write to sound card
				waveOutPrepareHeader(device, &headers[bufIndex], sizeof(WAVEHDR));
				waveOutWrite(device, &headers[bufIndex], sizeof(WAVEHDR));			
				bufIndex++; 
				bufIndex %= numBlocks;
			}
			return nullptr;
		}
	}
	
	//Initializes sample buffer and begins streaming data
	void initialize();
	
	//Closes waveOut stream and deletes sample buffer
	void close();
	
	//Sets callback function for getting next block of samples
	void setBlockFunction(std::function<void(short*)>);
	
	//Returns true if waveOut buffer is less than half full, false otherwise
	bool isBuffering();	
	
	//Callback function for waveOut library
	static void CALLBACK waveOutProc(HWAVEOUT, UINT, DWORD_PTR, DWORD_PTR, DWORD_PTR);
}

#endif