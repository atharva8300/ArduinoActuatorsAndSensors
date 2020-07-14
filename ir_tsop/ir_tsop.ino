#include<IRremote.h>
int recvPin = 12 ;
IRrecv irrecv(recvPin);
decode_results results ;
int flag=-1,flag1 = -1,flag2=-1,flag3=-1; 
int check ;
void setup()
{
	Serial.begin(9600);
	irrecv.enableIRIn();
  	pinMode(13,OUTPUT);
}

void loop()
{
if(irrecv.decode(&results))
{
  	Serial.println(results.value);
	if(results.value == 16580863)
	{
		flag = flag*(-1);
      	digitalWrite(13,HIGH);
	}
  	if(flag==1)
    {
    	Serial.println("main on");
      	check1();
      	check2();
      	check3();
    }
  	else if(flag == -1)
    {
    Serial.println("Main off");
    }
irrecv.resume();	
}
}
void check1()
{
if(results.value==16582903)
        {
        	if(flag1 == -1)
            {
              Serial.println("led1 High");
            }
          	else if(flag1 == 1)
            {
				Serial.println("led1 low");
              
            }
          flag1 = flag1*(-1);
        }
}
void check2()
{
if(results.value==16615543)
        {
        	if(flag2 == -1)
            {
              Serial.println("led2 High");
            }
          	else if(flag2 == 1)
            {
				Serial.println("led2 low");
              
            }
          flag2 = flag2*(-1);
        }
}
void check3()
{
if(results.value==16599223)
        {
        	if(flag3 == -1)
            {
              Serial.println("led3 High");
            }
          	else if(flag3 == 1)
            {
				Serial.println("led3 low");
              
            }
          flag3 = flag3*(-1);
        }
}

  
  
  
  