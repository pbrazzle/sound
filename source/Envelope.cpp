#include "Envelope.hpp"

Envelope::Envelope(double t) : releaseLength(t) { }

Envelope::Envelope() : Envelope(0.0) { }

double Envelope::getVal(double time)
{
	double val = 1 - (time - releaseLength) / releaseLength;
	return (val > 0) ? val : 0;
}
