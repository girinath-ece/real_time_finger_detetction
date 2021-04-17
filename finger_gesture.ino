#include <segment7.h>

segment7 disp(2,3,4,5,6,7,8,9);

void setup()
{
  Serial.begin(9600);
  disp.PinSetup();
  disp.nothing();
  delay(100);
}
void loop()
{
  if(Serial.available())
  {
    char i = Serial.read();
    if(i == '0')
    {
      disp.zero(false);
      delay(200);
    }
    if(i == '1')
    {
      disp.one(false);
      delay(200);
    }
    if(i == '2')
    {
      disp.two(false);
      delay(200);
    }
    if(i == '3')
    {
      disp.three(false);
      delay(200);
    }
    if(i == '4')
    {
      disp.four(false);
      delay(200);
    }
    if(i == '5')
    {
      disp.five(false);
      delay(200);
    }
  }
  delay(100);
}
