#include "Arduino.h"
#include "NightChecker.h"

NightChecker::NightChecker(int pin)
{
	pinMode(pin, OUTPUT);
	_pin = pin;
}

bool NightChecker::IsNight()
{
	if(analogRead(_pin)<20)
	{
		Serial.println(analogRead(_pin));
		return true;
	}
	else
	{
		Serial.println(analogRead(_pin));
		return false;
	}
}