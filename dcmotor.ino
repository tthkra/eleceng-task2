#include<Servo.h>
Servo servo;

void setup()
{
  servo.attach(2);
}

void loop()
{
for(int i=0;i<180;i+=1)
{
servo.write(i);
delay(20);
}
}