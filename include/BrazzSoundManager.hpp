#ifndef BRAZZSOUNDMANAGER
#define BRAZZSOUNDMANAGER

//Contains main functions for calculating sample blocks
//Planning to have this namespace also handle effect buffers as well
namespace BrazzSoundManager
{
	namespace
	{
		short* buffer;
		double globalTime;
	}
	
	//Return global time of synth
	double getTime();
	
	//Calculates next sample block for waveOut stream
	void calculateBlock(short*);
	
	//Returns buffer array
	short* getBuffer();
	
	//Initializes internal buffer and waveOut interface
	void initialize();
	
	//Deletes buffer and closes waveOut interface
	void close();
}

#endif