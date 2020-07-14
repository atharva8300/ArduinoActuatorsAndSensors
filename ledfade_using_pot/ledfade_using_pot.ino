int potpin = 0 ;
int val ;
int ledPin = 9 ;

void setup()
{
 	pinMode(ledPin,OUTPUT);
  	
}

void loop()
{
	val = analogRead(potpin);
  	val = map(val,0,1023,0,255);
  	analogWrite(ledPin,val);
  	delay(10);
}