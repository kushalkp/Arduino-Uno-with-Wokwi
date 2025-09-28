void setup()
{
  pinMode(5, OUTPUT); // LED on Pin 5
  pinMode(2, INPUT_PULLUP); // Press Button active LOW
}

void loop()
{
  // Keep blinking LED until button is pressed
  while (digitalRead(2) == HIGH) 
  { 
    digitalWrite(5, HIGH);
    delay(300);
    digitalWrite(5, LOW);
    delay(300);
  }
  digitalWrite(5, LOW); // Once button is pressed, Turn off LED
}