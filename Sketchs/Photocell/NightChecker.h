#ifndef NightChecker_h
#define NightChecker_h

#include "Arduino.h"

class NightChecker{
	private:
		int _pin;

	public :
		NightChecker(int pin);
		bool IsNight();
};

#endif