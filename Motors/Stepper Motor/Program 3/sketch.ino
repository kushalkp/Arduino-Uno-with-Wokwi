#include <Stepper.h>

const int stepsPerRevolution = 200;
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup()
{
  myStepper.setSpeed(60);   // Set motor speed
}

void loop() 
{
  // Repeat forward and backward motion three times
  for (int i = 0; i < 3; i++) {
    myStepper.step(stepsPerRevolution);   // Forward rotation
    delay(500);
    myStepper.step(-stepsPerRevolution);  // Reverse rotation
    delay(500);
  }

  delay(2000);  // Wait 2 seconds before next cycle
}