#ifndef INSTRUMENT
#define INSTRUMENT

#include "Note.hpp"
#include "Envelope.hpp"

#include <vector>
#include <queue>

class Instrument
{
	private:
		std::vector<Note> notes;
		Envelope env;
		
	public:
		//Constructors
		Instrument();
		Instrument(Envelope);
	
		//Adds note to playing vector
		//	Inputs:
		//		Note : note to be added
		void playNote(Note);
	
		//Get sample value for given time
		//	Inputs:
		//		double : time
		double play(double);
		
		//Changes the Instrument Envelope to given Envelope
		void changeEnvelope(Envelope);
};

#endif