#include<Servo.h>

Servo myservo ;
int potpin = 0;
int val ;

void setup()
{
	myservo.attach(9);	
  	Serial.begin(9600);
}

void loop()
{
	val = analogRead(potpin);//0 to 1023
  	Serial.println(val);
  	val = map(val,0,1023,0,180);
  	Serial.println(val);
  	myservo.write(val);
  	delay(10);
}