const int horloge=12;
const int verrou=11;
const int data=10;
const int reset = 9;

void setup()
{
  pinMode(horloge, OUTPUT);
  pinMode(verrou, OUTPUT);
  pinMode(data, OUTPUT);
  pinMode(reset,OUTPUT);

  Serial.begin(9600);
  
}

void loop()
{  
  /*digitalWrite(reset,HIGH);
  Serial.println("delay");
  delay(3000);*/
  Serial.println("start");

//  for (int i = 0; i < 4 ; i++)
//  {
//    Serial.println(i);
//    digitalWrite(verrou, LOW);
//    shiftOut(data, horloge, MSBFIRST, i);
//    digitalWrite(verrou, HIGH);
//    delay(1000);
//  }
//
//  shiftOut(data, horloge, MSBFIRST, 0);
//  Serial.println("");
  
  
  /*Serial.println("vanne 1");
  digitalWrite(verrou, LOW);
  shiftOut(data, horloge, MSBFIRST, 1);
  digitalWrite(verrou, HIGH);
  delay(3000);*/

  Serial.println("vanne 1");
  digitalWrite(verrou, LOW);
  shiftOut(data, horloge, MSBFIRST, 2);
  digitalWrite(verrou, HIGH);
  delay(3000);

  Serial.println("vanne 2");
  digitalWrite(verrou, LOW);
  shiftOut(data, horloge, MSBFIRST, 8);
  digitalWrite(verrou, HIGH);
  delay(3000);

/*  Serial.println("vanne 3");
  digitalWrite(verrou, LOW);
  shiftOut(data, horloge, MSBFIRST, 6);
  digitalWrite(verrou, HIGH);
  delay(3000);*/


  /*Serial.println("vanne 4");
  digitalWrite(verrou, LOW);
  shiftOut(data, horloge, MSBFIRST, 8);
  digitalWrite(verrou, HIGH);
  delay(3000);
*/
  Serial.println("fin");
  digitalWrite(verrou, LOW);
  shiftOut(data, horloge, MSBFIRST, 0);
  digitalWrite(verrou, HIGH);
  delay(1000);

  Serial.println("");
}


