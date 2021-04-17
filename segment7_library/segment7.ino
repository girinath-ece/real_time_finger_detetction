#include "segment7.h"

segment7 disp(2,3,4,5,6,7,8,9);

void setup()
{
  disp.PinSetup();
}

void loop()
{
  disp.one(false);
  disp.two(false);
  disp.three(false);
  disp.four(false);
  disp.five(false);
  disp.six(false);
  disp.seven(false);
  disp.eight(false);
  disp.nine(false); 
}
