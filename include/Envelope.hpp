#ifndef ENVELOPE
#define ENVELOPE

class Envelope
{
	private:
		double releaseLength;
		
	public:
		Envelope();
		Envelope(double);
		
		double getVal(double);
};

#endif