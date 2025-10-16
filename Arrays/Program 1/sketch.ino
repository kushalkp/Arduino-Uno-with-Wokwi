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
    digitalWrite(leds[i], HIGH);
    delay(700);
    digitalWrite(leds[i], LOW);
  }
}