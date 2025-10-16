int leds[] = {2, 3, 4, 5, 6}; // Pins where LEDs are connected
int ledCount = sizeof(leds)/sizeof(leds[0]); // Automatically calculate number of LEDs
// sizeof() returns size of data structure in Bytes

void setup() 
{
  for (int i = 0; i < ledCount; i++)
    pinMode(leds[i], OUTPUT);

}

void loop() 
{
  // Move LED lights forward (left to right)
  for (int i = 0; i < ledCount; i++)
  {
    digitalWrite(leds[i], HIGH); // Turn LED on
    delay(700);
    digitalWrite(leds[i], LOW); // Turn LED off
  }
  // Move LED lights backward (right to left)
  for (int i = ledCount - 1; i >= 0; i--)
  {
    digitalWrite(leds[i], HIGH);  // Turn LED on
    delay(700);                   
    digitalWrite(leds[i], LOW);   // Turn LED off
  }
}