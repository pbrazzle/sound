#ifndef BRAZZSOUND
#define BRAZZSOUND

#include <vector>
#include <math.h>

#include "Note.hpp"
#include "Instrument.hpp"

//Entry point namespace for user
//Handles all interaction between user program and internal namespaces
namespace BrazzSound
{
	namespace
	{
		std::vector<Instrument> instruments;
		std::vector<int> instIds;
		
		double globalTime;
		short buffer[512];
		
		void calculateBlock(short* block)
		{
			for (int i = 0; i < 512; i++) block[i] = buffer[i];

			for (unsigned int n = 0; n < 512; n++)
			{
				//Calculate waveform
				double val = 0;
				for (int i = 0; i < instruments.size(); i++)
				{
					val += instruments[i].play(globalTime);					
				}
				
				//Quantize sample and save
				double dMaxSample = (double)pow(2, (sizeof(short) * 8) - 1) - 1;
				short nNewSample = (short) (val*dMaxSample);
				buffer[n] = nNewSample;
				globalTime += 1.0 / 44100;
			}
		}
	}	
	
	//sends current sample block playing
	short* getCurrentBlock();
	
	//plays standard note as sin wave at given frequency
	//Inputs:
	//	double : frequency
	//	double : time
	void playNote(double, double);
	
	//Sets ARMA values for synth
	void setARMAValues(std::vector<double>);
	
	//Sends initialize signal to waveOut interface
	void initialize();
	
	//Sends shutdown signal to waveOut interface
	void close();
}

#endif