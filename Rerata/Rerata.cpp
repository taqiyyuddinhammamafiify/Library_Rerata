#include "Arduino.h"
#include "Rerata.h"

const int numReadings = 10;
int readings[numReadings];

Rerata::Rerata(int inputPin){

  for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
}

int Rerata::Average(){
    total = total - readings[readIndex];
    readings[readIndex] = analogRead(_inputPin);
    total = total + readings[readIndex];
    readIndex = readIndex + 1;

    if (readIndex >= numReadings) {
      readIndex = 0;
    }
    average = total/numReadings;

    return average;
 }
