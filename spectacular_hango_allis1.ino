#include<Servo.h>
Servo servocuk;

void setup()
{
  servocuk.attach(5);
}

void loop()
{
  for (int basl=0; basl <= 180; basl = basl + 15)
  {  
    servocuk.write(basl);
    delay(500);

  } 
  for (int basl=180; basl >= 0; basl = basl - 30)
  {  
   servocuk.write(basl);
    delay(500);

  }  
}