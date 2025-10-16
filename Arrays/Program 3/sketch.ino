int leds[] = {2, 3, 4, 5, 6};
int ledCount = sizeof(leds)/sizeof(leds[0]);
int buttonPin = 11; // Push button connected to Pin 11
int currentLED = 0; // Index of LED to be turned ON
int previousLED = 0; // Index of LED to be turned OFF

void setup()
{
  for (int i = 0; i < ledCount; i++)
  {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW); // Set all LEDs to OFF initially
  }
  pinMode(11, INPUT_PULLUP);
}

void loop() 
{
  int buttonState = digitalRead(buttonPin); // Read current button status
  if (buttonState == LOW) // Check if button is pressed (active LOW)
  {
    digitalWrite(leds[previousLED], LOW); //Turn OFF previous LED
    digitalWrite(leds[currentLED], HIGH); // Turn ON current LED
    // Update LED indices
    previousLED = currentLED; // Store current LED index
    currentLED = (currentLED + 1) % ledCount; // Move to the next LED (wraps around)
    delay(200);
  }
}