#ifndef Rerata_h
#define Rerata_h

#include "Arduino.h"

class Rerata{
  public:
  Rerata(int inputPin);
  int Average();

  private:
  int _inputPin;
  int readIndex = 0;              
  int total = 0;                  
  int average = 0;               
};

#endif
