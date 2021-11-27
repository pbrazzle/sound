#include "Instrument.hpp"

#include <windows.h>
#include <string>

Instrument::Instrument() : Instrument(Envelope(0.0)) { }

Instrument::Instrument(Envelope e) : env(e) { }
	
double Instrument::play(double time)
{
	double val = 0;
	
	//Calculate all notes for current time
	for (int i = 0; i < notes.size(); i++)
	{
		Note n = notes[i];
		double e =  env.getVal(time - notes[i].getStartTime());
		if (e == 0)
		{
			notes.erase(notes.begin()+i);
			i--;
		}
		else val += e*notes[i].play(time);
	}
	
	//Send instrument value
	return val;
}

void Instrument::playNote(Note n) { notes.push_back(n); }

void Instrument::changeEnvelope(Envelope e) { env = e; }