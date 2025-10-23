const int ledPin = 5;

void setup() 
{
  pinMode(ledPin, OUTPUT);
}

void loop() 
{
  blinkLED(ledPin, 1000);  // blink at 1s interval
}

void blinkLED(int pin, int duration) 
{
  digitalWrite(pin, HIGH);
  delay(duration);
  digitalWrite(pin, LOW);
  delay(duration);
}