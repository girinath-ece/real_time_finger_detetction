#include "segment7.h"

#include "Arduino.h"

segment7::segment7(int A, int B,int C,int D,int E,int F,int G,int DP)
{
  segA = A;
  segB = B;
  segC = C;
  segD = D;
  segE = E;
  segF = F;
  segG = G;
  segDP = DP;
}
void segment7::PinSetup()
{
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  pinMode(segDP, OUTPUT);
}

void segment7::nothing()
{
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);
  digitalWrite(segDP,HIGH);
}
void segment7::zero(boolean dp)
{
  digitalWrite(segA,LOW);
  digitalWrite(segB,LOW);
  digitalWrite(segC,LOW);
  digitalWrite(segD,LOW);
  digitalWrite(segE,LOW);
  digitalWrite(segF,LOW);
  digitalWrite(segG,HIGH);
  if (dp == false)
    digitalWrite(segDP,HIGH);
  else
    digitalWrite(segDP,LOW);
}

void segment7::one(boolean dp)
{
  digitalWrite(segA,HIGH);
  digitalWrite(segB,LOW);
  digitalWrite(segC,LOW);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);
  if (dp == false)
    digitalWrite(segDP,HIGH);
  else
    digitalWrite(segDP,LOW);
}    
      
void segment7::two(boolean dp)
{
  digitalWrite(segA,LOW);
  digitalWrite(segB,LOW);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,LOW);
  digitalWrite(segE,LOW);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,LOW);
  if (dp == false)
    digitalWrite(segDP,HIGH);
  else
    digitalWrite(segDP,LOW);
}
    
void segment7::three(boolean dp)
{
  digitalWrite(segA,LOW);
  digitalWrite(segB,LOW);
  digitalWrite(segC,LOW);
  digitalWrite(segD,LOW);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,LOW);
  if (dp == false)
    digitalWrite(segDP,HIGH);
  else
    digitalWrite(segDP,LOW);
}
    
void segment7::four(boolean dp)
{
  digitalWrite(segA,HIGH);
  digitalWrite(segB,LOW);
  digitalWrite(segC,LOW);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,LOW);
  digitalWrite(segG,LOW);
  if (dp == false)
    digitalWrite(segDP,HIGH);
  else
    digitalWrite(segDP,LOW);
}

void segment7::five(boolean dp)
{
  digitalWrite(segA,LOW);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,LOW);
  digitalWrite(segD,LOW);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,LOW);
  digitalWrite(segG,LOW);
  if (dp == false)
    digitalWrite(segDP,HIGH);
  else
    digitalWrite(segDP,LOW);
}

void segment7::six(boolean dp)
{
  digitalWrite(segA,LOW);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,LOW);
  digitalWrite(segD,LOW);
  digitalWrite(segE,LOW);
  digitalWrite(segF,LOW);
  digitalWrite(segG,LOW);
  if (dp == false)
    digitalWrite(segDP,HIGH);
  else
    digitalWrite(segDP,LOW);
}

void segment7::seven(boolean dp)
{
  digitalWrite(segA,LOW);
  digitalWrite(segB,LOW);
  digitalWrite(segC,LOW);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);
  if (dp == false)
    digitalWrite(segDP,HIGH);
  else
    digitalWrite(segDP,LOW);
}

void segment7::eight(boolean dp)
{
  digitalWrite(segA,LOW);
  digitalWrite(segB,LOW);
  digitalWrite(segC,LOW);
  digitalWrite(segD,LOW);
  digitalWrite(segE,LOW);
  digitalWrite(segF,LOW);
  digitalWrite(segG,LOW);
  if (dp == false)
    digitalWrite(segDP,HIGH);
  else
    digitalWrite(segDP,LOW);
}

void segment7::nine(boolean dp)
{
  digitalWrite(segA,LOW);
  digitalWrite(segB,LOW);
  digitalWrite(segC,LOW);
  digitalWrite(segD,LOW);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,LOW);
  digitalWrite(segG,LOW);
  if (dp == false)
    digitalWrite(segDP,HIGH);
  else
    digitalWrite(segDP,LOW);
}
