#include "Instrument.hpp"

#include <windows.h>
#include <string>

Instrument::Instrument() : Instrument(Envelope(0.0)) { }

Instrument::Instrument(Envelope e) : env(e) 
{
	//for (int i = 0; i < 50; i++) armaBuf.push_back(0);
}
	
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
	
	//Calculate ARMA system
	double arma = 0;
	//armaBuf.push_back(val);
	armaBuf.insert(armaBuf.begin(), val);
	armaBuf.pop_back();
	if (armaVals.size() != 0)
	{
		for (int i = 0; i < armaVals.size(); i++) arma += armaVals[i]*armaBuf[i];	
		val = arma;
	}
	
	//Send instrument value
	return val;
}

void Instrument::playNote(Note n) { notes.push_back(n); }

void Instrument::setARMAValues(std::vector<double> newVals) 
{ 
	armaVals = newVals;
	for (int i = armaBuf.size(); i < armaVals.size(); i++) armaBuf.push_back(0);
}

void Instrument::changeEnvelope(Envelope e) { env = e; }