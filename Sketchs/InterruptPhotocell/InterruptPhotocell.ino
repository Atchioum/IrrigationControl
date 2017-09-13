#include <avr/sleep.h> 

int photocellPin = 2;

void wakeUp()
{
	Serial.begin(9600);
	Serial.println("inside!");
}

void setup()
{
	Serial.begin(9600);
	Serial.println("start!");
	pinMode(photocellPin,INPUT);
	attachInterrupt(0, wakeUp, LOW);
}	


void loop()
{
	sleepNow();
}


void sleepNow()
{
	Serial.begin(9600);
	Serial.println("sleep!");
	set_sleep_mode(SLEEP_MODE_PWR_DOWN); // sleep mode is set here
	sleep_enable(); // enables the sleep bit in the mcucr register
	attachInterrupt(0,wakeUp, RISING); // use interrupt 0 (pin 2) and run function
	sleep_mode(); // here the device is actually put to sleep!!
	sleep_disable(); // first thing after waking from sleep:
	detachInterrupt(0); // disables interrupt 0 on pin 2 so the
}
