#include <Stepper.h>

const int stepsPerRevolution = 200;   // number of steps per full revolution
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
// A- to pin 11, A+ to pin 10, B+ to pin 9 and B- to pin 8

void setup() 
{
  myStepper.setSpeed(60);   // set motor speed (RPM)
}

void loop() 
{
  myStepper.step(stepsPerRevolution);   // rotate one full turn clockwise
  delay(1000);
  myStepper.step(-stepsPerRevolution);  // rotate one full turn counterclockwise
  delay(1000);
}