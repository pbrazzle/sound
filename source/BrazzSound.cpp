#include "BrazzSound.hpp"

#include "WaveOutInterface.hpp"
#include "Envelope.hpp"

std::vector<short> BrazzSound::getCurrentBlock()
{
	std::vector<short> buf;
	for (int i = 0; i < 512; i++) buf.push_back(buffer[i]);
	return buf;
}
	
void BrazzSound::playNote(double freq, double time)
{
	Note n(0.1,freq,globalTime,1);
	instruments[0].changeEnvelope(Envelope(time));
	instruments[0].playNote(n);
}

void BrazzSound::initialize()
{
	Envelope e(0.2);
	Instrument i(e);
	instruments.push_back(i);
	WaveOutInterface::initialize();
	WaveOutInterface::setBlockFunction(&calculateBlock);
	globalTime = 0;
	buffer = std::unique_ptr<short[]>(new short[512]);
}

void BrazzSound::close()
{
	WaveOutInterface::close();
}