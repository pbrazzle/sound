//Sound testing...
#include <iostream>
#include <vector>
#include <cmath>
#include <string>

#include <Windows.h>
#include <pthread.h>

#include "StreamManager.hpp"
#include "EffectsManager.hpp"
#include "Note.hpp"

using namespace std;

class Synth
{
	private:
		StreamManager manager;
		bool threadPaused = false;
		unsigned int sampleRate, blocks, blockSamples, freeBlocks;
		short* blockMemory;
		bool running;
		pthread_t waveThread;
		pthread_mutex_t blockMutex;
		
		short nMaxSample;
		double dMaxSample;

		double globalTime, timeStep;
		
		vector<Note> notes;

		double clip(double dSample, double dMax);
		void calculateBlock();
		void soundThread();
		void blockCall(short*);
		
		static void* threadRouter(void*);
		
	public:
		Synth();
		Synth(unsigned int);
		~Synth();
		
		bool isBuffering();
		int numNotes();
		double getTime();
		
		void addNote(Note);
		void removeNote(unsigned int);
		void getBlock(short*);
};