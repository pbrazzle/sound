#include "BrazzSound.hpp"

#include "BrazzSoundFactory.hpp"
#include "BrazzSoundManager.hpp"
#include "BrazzSoundData.hpp"

short* BrazzSound::getCurrentBlock()
{
	return BrazzSoundData::getBuffer();
}
	
void BrazzSound::playNote(double freq, double time)
{
	BrazzSoundData::changeInstrumentEnvelope(Envelope(time), 0);
	BrazzSoundFactory::createNote(freq, time, 0);
}

void BrazzSound::setARMAValues(std::vector<double> vals)
{
	BrazzSoundData::setARMAValues(vals);
}

void BrazzSound::initialize()
{
	BrazzSoundFactory::createInstrument(0.2);
	BrazzSoundManager::initialize();
	BrazzSoundData::initialize();
}

void BrazzSound::close()
{
	BrazzSoundManager::close();
}