int leftForward = 2;
int leftBackward = 3;
int rightForward = 4;
int rightBackward = 5;

void setup() 
{
  pinMode(leftForward , OUTPUT);
  pinMode(leftBackward , OUTPUT);
  pinMode(rightForward , OUTPUT);
  pinMode(rightBackward , OUTPUT);

}

void loop()
{
  digitalWrite(leftForward , HIGH);
  digitalWrite(leftBackward , LOW);
  digitalWrite(rightForward , HIGH);
  digitalWrite(rightBackward , LOW);
 
}
