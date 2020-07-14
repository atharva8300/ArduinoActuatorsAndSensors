int input_pin = 2 ;

void setup()
{
  pinMode(input_pin , INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int value = digitalRead(input_pin);
  Serial.println(value);
  if(value)
  {
  digitalWrite(13,LOW);
  }
  else
  {
    digitalWrite(13,HIGH);
  }
  
}