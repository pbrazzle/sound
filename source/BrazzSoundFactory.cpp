#include "BrazzSoundFactory.hpp"
#include "BrazzSoundData.hpp"
#include "BrazzSoundManager.hpp"
#include "Note.hpp"
#include "Instrument.hpp"

void BrazzSoundFactory::createNote(double freq, double time, int id)
{
	Note n(0.1,freq,BrazzSoundData::getTime(),1);
	BrazzSoundData::addNote(n, id);
}

int BrazzSoundFactory::createInstrument(double time)
{
	Envelope e(time);
	Instrument i(e);
	return BrazzSoundData::addInstrument(i);
}