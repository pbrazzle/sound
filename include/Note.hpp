#ifndef NOTE
#define NOTE

#include "Envelope.hpp"

//Shape defines
#define SIN_WAVE 0
#define TRIANGLE_WAVE 1
#define SQUARE_WAVE 2
#define NOISE 3

class Note
{
	private:
		double freq, amp, startTime;
		unsigned int shape;
		
	public:
		//Default constructor
		Note();
		
		/*
		*	Note constructor
		*	Inputs:
		*		double : amplitude
		*		double : start time
		*		double : frequency
		*		unsigned int : shape
		*/
		Note(double, double, double, unsigned int);
		
		double getStartTime();
		double play(double);
};

#endif