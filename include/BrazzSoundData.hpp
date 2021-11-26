#ifndef BRAZZSOUNDDATA
#define BRAZZSOUNDDATA

#include <vector>

#include "Note.hpp"
#include "Instrument.hpp"

//Database of all instruments, envelopes, notes, and effects'
//Currently holds only Notes
namespace BrazzSoundData
{
	namespace
	{
		std::vector<Instrument> instruments;
		std::vector<int> instIds;
		
		double globalTime;
		short buffer[512];
	}	
	
	//Initializes internal variables
	//Sets buffer array to all 0's and globalTime to 0
	void initialize();
	
	//adds Instrument to database
	//returns Instrument id
	int addInstrument(Instrument);
	
	//adds Note to vector
	//Inputs:
	//	Note : note to be added
	// 	int : Instrument id
	void addNote(Note, int);
	
	//Sets ARMA values for instrument 1
	//Placeholder for effects
	void setARMAValues(std::vector<double>);
	
	//increments globalTime by 1.0 / sampleRate (44100)
	void incrementTime();
	
	/***GETTERS***/
	
	//returns Instrument vector
	std::vector<Instrument>& getInstruments();
	
	//returns globalTime
	double getTime();
	
	//returns samepleBuffer
	short* getBuffer();
	
	//Changes Instrument Envelope to parameter given
	void changeInstrumentEnvelope(Envelope, int);
}

#endif