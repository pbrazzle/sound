#include "BrazzSoundData.hpp"

#include <string.h>

void BrazzSoundData::initialize()
{
	globalTime = 0;
	memset(buffer, 0, sizeof(short)*512);
}

void BrazzSoundData::addNote(Note n, int id) 
{ 
	for (int i = 0; i < instruments.size(); i++)
	{
		if (instIds[i] == id) instruments[i].playNote(n);
	}
}

void BrazzSoundData::setARMAValues(std::vector<double> vals)
{
	instruments[0].setARMAValues(vals);
}

int BrazzSoundData::addInstrument(Instrument i)
{
	int id = instruments.size();
	instIds.push_back(id);
	instruments.push_back(i);
	return id;
}

void BrazzSoundData::incrementTime() { globalTime += 1.0 / 44100; }

std::vector<Instrument>& BrazzSoundData::getInstruments() { return instruments; }

short* BrazzSoundData::getBuffer() { return buffer; }

double BrazzSoundData::getTime() { return globalTime; }

void BrazzSoundData::changeInstrumentEnvelope(Envelope e, int id)
{
	for (int i = 0; i < instruments.size(); i++)
	{
		if (instIds[i] == id) instruments[i].changeEnvelope(e);
	}
}