#include "Note.hpp"

#include <cmath>
#include <stdlib.h>

#define PI 3.14159265

Note::Note() : Note(0, 0, 0, -1) { }

Note::Note(double a, double f, double t, unsigned int s) : amp(a), freq(f), startTime(t), shape(s) { }

double Note::getStartTime() { return startTime; }

double Note::play(double time)
{
	switch(shape)
	{
		case SIN_WAVE:
			return amp*sin(2*PI*freq*time);
			break;
		case TRIANGLE_WAVE:
			return 2*amp*asin(sin(2*PI*freq*time))/PI;
			break;
		case SQUARE_WAVE:
			return (sin(2*PI*freq*time)>0) ? amp : -amp;
			break;
		case NOISE:
			return (double) amp*((double)2*rand()/RAND_MAX-1);
			break;
		default:
			return 0;
	}
}
