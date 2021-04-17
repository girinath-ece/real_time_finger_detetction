
#ifndef SEGMENT7_H
#define SEGMENT7_H

#include "Arduino.h"

class segment7
{
  private:
    int segA;
    int segB;
    int segC;
    int segD;
    int segE;
    int segF;
    int segG;
    int segDP;
    boolean dp;

  public:
    segment7(int A, int B,int C,int D,int E,int F,int G,int DP);
    void PinSetup();
    void zero(boolean dp);    
    void one(boolean dp);
    void two(boolean dp);
    void three(boolean dp);
    void four(boolean dp);
    void five(boolean dp);
    void six(boolean dp);
    void seven(boolean dp);
    void eight(boolean dp);
    void nine(boolean dp);
    void nothing();
};

#endif
