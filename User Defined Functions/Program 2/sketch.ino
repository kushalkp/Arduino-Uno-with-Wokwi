int leds[] = {2, 3, 4, 5}; // LED pins connected to Arduino
int ledCount = sizeof(leds)/sizeof(leds[0]); // Number of LEDs

void setup() 
{
  for (int i = 0; i < ledCount; i++) // Set all LED pins as output
    pinMode(leds[i], OUTPUT);
}

void loop() 
{
  runPattern(leds, ledCount, 200); // Run LED pattern with 200 ms delay
}

// Function to turn LEDs ON and OFF sequentially
void runPattern(int pins[], int count, int delayTime) 
{
  for (int i = 0; i < count; i++) 
  {
    digitalWrite(pins[i], HIGH); // Turn ON current LED
    delay(delayTime); // Wait
    digitalWrite(pins[i], LOW); // Turn OFF current LED
  }
}