#include <Stepper.h>

const int stepsPerRevolution = 200;
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

const int buttonPin = 2;   // Button connected to pin 2

void setup() 
{
  pinMode(buttonPin, INPUT_PULLUP);  // Use internal pull-up resistor
  myStepper.setSpeed(30);            // Set motor speed to 30 RPM
}

void loop() 
{
  // Button is active LOW (pressed = LOW)
  if (digitalRead(buttonPin) == LOW) {
    myStepper.step(stepsPerRevolution);  // Rotate one full turn
    delay(500);                          // Small delay to avoid bouncing
  }
}