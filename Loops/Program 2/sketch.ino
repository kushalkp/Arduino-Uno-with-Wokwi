int ledPin = 9; // PWM-capable pin

void setup() 
{
  pinMode(ledPin, OUTPUT); // Built-in LED
}

void loop() 
{
  // Fade in (0 -> 255)
  for (int brightness = 0; brightness <= 255; brightness++)
  {
    analogWrite(ledPin, brightness); // Set LED brightness
    delay(10);
  }
  // Fade out (255 -> 0)
  for (int brightness= 255; brightness >= 0; brightness--)
  {
    analogWrite(ledPin, brightness);
    delay(10);
  }
}