#include "BrazzSound.hpp"

#include "WaveOutInterface.hpp"
#include "Envelope.hpp"

short* BrazzSound::getCurrentBlock()
{
	return buffer;
}
	
void BrazzSound::playNote(double freq, double time)
{
	for (int i = 0; i < instruments.size(); i++)
	{
		if (instIds[i] == 0) instruments[i].changeEnvelope(Envelope(time));
	}
	Note n(0.1,freq,globalTime,1);
	for (int i = 0; i < instruments.size(); i++)
	{
		if (instIds[i] == 0) instruments[i].playNote(n);
	}
}

void BrazzSound::setARMAValues(std::vector<double> vals)
{
	instruments[0].setARMAValues(vals);
}

void BrazzSound::initialize()
{
	Envelope e(0.2);
	Instrument i(e);
	int id = instruments.size();
	instIds.push_back(id);
	instruments.push_back(i);
	WaveOutInterface::initialize();
	WaveOutInterface::setBlockFunction(&calculateBlock);
	globalTime = 0;
	memset(buffer, 0, sizeof(short)*512);
}

void BrazzSound::close()
{
	WaveOutInterface::close();
}