#include <ShiftOutX.h>
#include <ShiftPinNo.h>

const int horloge=12; // clock = blanc = SH_CP
const int verrou=11; //Latch = jaune = ST_CP
const int data=10; // data = vert = DS
//const int reset = 9;

//shiftOutX(_latchPin, _dataPin, _clockPin, _bitOrder, _NofRegisters);
shiftOutX shiftDisplay(verrou, data, horloge, MSBFIRST, 2); 


void setup()
{
  pinMode(horloge, OUTPUT);
  pinMode(verrou, OUTPUT);
  pinMode(data, OUTPUT);
  //pinMode(reset,OUTPUT);

  Serial.begin(9600);
  
}

void loop()
{  
  /*digitalWrite(reset,HIGH);
  Serial.println("delay");
  delay(3000);*/
  Serial.println("start");


  shiftDisplay.pinOn(shPin2);

  if (shiftDisplay.pinState(shPin2))
    Serial.println("2 ouvert!");
  
  delay(3000);

  shiftDisplay.pinOff(shPin2);

  if (shiftDisplay.pinState(shPin2)==false)
    Serial.println("2 fermé!");
  
  delay(5000);


  shiftDisplay.pinOn(shPin10);

  if (shiftDisplay.pinState(shPin10))
    Serial.println("10 ouvert!");
  
  delay(3000);

  shiftDisplay.pinOff(shPin10);

  if (shiftDisplay.pinState(shPin10)==false)
    Serial.println("10 fermé!");
  
  delay(3000);


  // for (int j = 1; j <= 2 ; j++)
  // {
  //   for (int i = 1; i <= 8 ; i++)
  //   {
  //     int x=1<<i;
  //     // int dec=0;
  //     // if(j>1)
  //     //   dec=8;

  //     Serial.println(x);
  //     digitalWrite(verrou, LOW);
  //     shiftOut(data, horloge, MSBFIRST, x);

  //     if(j>1)
  //     {
  //       Serial.println(j);
  //       shiftOut(data, horloge, MSBFIRST, x<<8);
  //     }

  //     digitalWrite(verrou, HIGH);
  //     delay(3000);
  //   }
  // }

//  shiftOut(data, horloge, MSBFIRST, 0);
//  Serial.println("");
  
  
  /*Serial.println("vanne 1");
  digitalWrite(verrou, LOW);
  shiftOut(data, horloge, MSBFIRST, 1);
  digitalWrite(verrou, HIGH);
  delay(3000);*/

  // Serial.println("vanne 1");
  // digitalWrite(verrou, LOW);
  // shiftOut(data, horloge, MSBFIRST, 2);
  // digitalWrite(verrou, HIGH);
  // delay(5000);

  // Serial.println("vanne 2");
  // digitalWrite(verrou, LOW);
  // shiftOut(data, horloge, MSBFIRST, 8);
  // digitalWrite(verrou, HIGH);
  // delay(5000);

  // Serial.println("vanne 3");
  // digitalWrite(verrou, LOW);
  // shiftOut(data, horloge, MSBFIRST, 32);
  // digitalWrite(verrou, HIGH);
  // delay(3000);


  // Serial.println("vanne 4");
  // digitalWrite(verrou, LOW);
  // shiftOut(data, horloge, MSBFIRST, 128);
  // digitalWrite(verrou, HIGH);
  // delay(3000);


  // Serial.println("vanne 5");
  // digitalWrite(verrou, LOW);
  // shiftOut(data, horloge, MSBFIRST, 512 >> 8);
  // digitalWrite(verrou, HIGH);
  // delay(5000);

  // Serial.println("fin");
  // digitalWrite(verrou, LOW);
  // shiftOut(data, horloge, MSBFIRST, 0);
  // digitalWrite(verrou, HIGH);
  // delay(5000);

  Serial.println("");
}


