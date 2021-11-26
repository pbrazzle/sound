#include "BrazzSoundManager.hpp"
#include "WaveOutInterface.hpp"
#include "BrazzSoundData.hpp"
#include "Note.hpp"
#include "Envelope.hpp"
#include "Instrument.hpp"

#include <vector>

void BrazzSoundManager::calculateBlock(short* block)
{
	short* buf = BrazzSoundData::getBuffer();
	for (int i = 0; i < 512; i++) block[i] = buf[i];
	
	std::vector<Instrument>& instruments = BrazzSoundData::getInstruments();
	for (unsigned int n = 0; n < 512; n++)
	{
		//Calculate waveform
		double val = 0;
		for (int i = 0; i < instruments.size(); i++)
		{
			val += instruments[i].play(BrazzSoundData::getTime());					
		}
		
		//Quantize sample and save
		double dMaxSample = (double)pow(2, (sizeof(short) * 8) - 1) - 1;
		short nNewSample = (short) (val*dMaxSample);
		buf[n] = nNewSample;
		BrazzSoundData::incrementTime();
	}
}
	
void BrazzSoundManager::initialize()
{
	WaveOutInterface::initialize();
	WaveOutInterface::setBlockFunction(&calculateBlock);
}
	
void BrazzSoundManager::close()
{
	WaveOutInterface::close();
}
