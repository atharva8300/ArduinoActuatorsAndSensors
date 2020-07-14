int tiltPin = 8 ;
int ledPin = 13 ;
int val ;
void setup()
{
  pinMode(tiltPin,INPUT);
  pinMode(ledPin,OUTPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 	val = digitalRead(tiltPin);
  	Serial.println(val);
  		
  	if(val)
    {
   		digitalWrite(ledPin,HIGH);
      	digitalWrite(2,HIGH);
    }
  	else
    {
      digitalWrite(ledPin,LOW);
      digitalWrite(2,LOW);
    }
}