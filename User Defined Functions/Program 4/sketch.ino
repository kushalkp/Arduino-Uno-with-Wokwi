#include <Stepper.h>

const int stepsPerRev = 200; // Steps per full revolution
Stepper motor(stepsPerRev, 8, 9, 10, 11); // Initialize stepper motor pins

void setup() 
{
  motor.setSpeed(30);  // Set motor speed (RPM)
  Serial.begin(9600); // Start serial communication
}

void loop() 
{
  rotateMotor('F'); // Rotate clockwise
  delay(1000);
  rotateMotor('R'); // Rotate counter-clockwise
  delay(1000);
}

// Function to rotate motor based on direction
void rotateMotor(char direction) 
{
  if (direction == 'F') 
  {
    Serial.println("Rotating Clockwise");
    motor.step(stepsPerRev); // One full clockwise revolution
  } 
  else if (direction == 'R') 
  {
    Serial.println("Rotating Counter-Clockwise");
    motor.step(-stepsPerRev); // One full counter-clockwise revolution
  }
}