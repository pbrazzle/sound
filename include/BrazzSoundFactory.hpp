#ifndef BRAZZSOUNDFACTORY
#define BRAZZSOUNDFACTORY

//Contains all functions to create and replace notes, instruments, envelopes, and effects
namespace BrazzSoundFactory
{
	//Creates note and sends it to database
	//Inputs: 
	//	double : frequency
	//	double : time
	//	int : Instrument id
	void createNote(double, double, int);
	
	//Creates instrument and sends it to database
	//Inputs:
	//	double : Envelope time
	//Returns id of created instrument
	int createInstrument(double);
}

#endif