#ifndef BRAZZSOUND
#define BRAZZSOUND

#include <vector>

//Entry point namespace for user
//Handles all interaction between user program and internal namespaces
namespace BrazzSound
{
	//sends current sample block playing
	short* getCurrentBlock();
	
	//plays standard note as sin wave at given frequency
	//Inputs:
	//	double : frequency
	//	double : time
	void playNote(double, double);
	
	//Sets ARMA values for synth
	void setARMAValues(std::vector<double>);
	
	//Sends initialize signal to waveOut interface
	void initialize();
	
	//Sends shutdown signal to waveOut interface
	void close();
}

#endif