#include "synth.hpp"
#include "StreamManager.hpp"
#include "WaveOutInterface.hpp"

#include <iostream>
#include <functional>

using namespace std;

Synth::Synth() : Synth(44100) { }

Synth::Synth(unsigned int s) : sampleRate(s)
{
	//Set default values
	blocks = 8;
	blockSamples = 512;
	dMaxSample = (double)pow(2, (sizeof(short) * 8) - 1) - 1;
	globalTime = 0;
	timeStep = 1.0 / sampleRate;
	
	//Allocate buffer
	blockMemory = new short[blockSamples];		
	ZeroMemory(blockMemory, sizeof(short) * blockSamples);
	
	//Create sound thread
	running = true;
	
	//Initialize waveOut
	WaveOutInterface::initialize();
	
	std::function<void(short*)> call = [=](short* block){
		this->blockCall(block);
	};
	WaveOutInterface::setBlockFunction(call);
}

Synth::~Synth()
{
	//Delete block memory
	delete [] blockMemory;
	
	//Join thread
	running = false;
	
	//Close waveOut interface
	WaveOutInterface::close();
}

void Synth::blockCall(short* block)
{
	pthread_mutex_lock(&blockMutex);
	for (int i = 0; i < blockSamples; i++) block[i] = blockMemory[i];
	calculateBlock();
	pthread_mutex_unlock(&blockMutex);
}

void Synth::calculateBlock()
{
	//Generate waveform block
	for (unsigned int n = 0; n < blockSamples; n++)
	{
		//Calculate waveform
		double val = 0;
		for (int i = 0; i < notes.size(); i++)
		{
			Note n = notes[i];
			val += n.play(globalTime);
			if (!n.isPlaying())
			{				
				removeNote(i); 
				i--;
			}					
		}
		//Quantize sample and save
		short nNewSample = (short) (val*dMaxSample);
		blockMemory[n] = nNewSample;
		globalTime += timeStep;
	}
}

double Synth::getTime() { return globalTime; }

void Synth::addNote(Note n)
{
	notes.push_back(n);
}

void Synth::removeNote(unsigned int i)
{
	if (i < notes.size() && i >= 0) notes.erase(notes.begin()+i);
}

void Synth::getBlock(short* d) 
{ 
	pthread_mutex_lock(&blockMutex);
	for (int i = 0; i < 512; i++) d[i] = blockMemory[i]; 
	pthread_mutex_unlock(&blockMutex);
}

bool Synth::isBuffering() { return WaveOutInterface::isBuffering(); }

int Synth::numNotes() { return notes.size(); } 