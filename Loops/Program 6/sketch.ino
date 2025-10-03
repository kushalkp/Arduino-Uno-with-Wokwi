void setup() 
{
  // Set digital pins 1 through 6 as outputs
  for (int pin = 1; pin <= 6; pin++)
    pinMode(pin, OUTPUT);
}

void loop() 
{
  for (int pin = 1; pin <= 6; pin++)
  {
    // If the pin number is a multiple of 3 (3 or 6), skip it
    if (pin % 3 == 0)
      continue;

    digitalWrite(pin, HIGH);
    delay(2000);
    digitalWrite(pin, LOW);
    delay(2000);
  }
  // After cycling through all pins, wait 5 seconds before repeating
  delay(5000);
}
