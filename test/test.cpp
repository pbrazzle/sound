//#include "synth.hpp"

#include <iostream>
#include <cmath>
#include <windows.h>

#include "BrazzSound.hpp"

using namespace std;

int main()
{
	cout << "This is a test";
	
	BrazzSound::initialize();
	BrazzSound::playNote(440, 1);
	Sleep(1000);
	BrazzSound::playNote(220, 1);
	Sleep(1000);
	BrazzSound::playNote(880, 1);
	Sleep(1000);
	BrazzSound::close();
	
	return 0;
}