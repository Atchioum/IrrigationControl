#include <NightChecker.h>

int photocellPin = 0;
NightChecker nightChecker(photocellPin);

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	//Serial.println(analogRead(photocellPin));

	if(nightChecker.IsNight())
	{
		Serial.println("Nuit");
	}
	else
	{
		Serial.println("Jour");
	}

	delay(2000);
}

