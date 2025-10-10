int buttonPin = 2;   // Push button connected to pin 2
int ledPin = 5;      // LED connected to pin 5
int buttonState;     // Variable to store button status

void setup() 
{
  pinMode(buttonPin, INPUT_PULLUP); // Use internal pull-up (button active LOW)
  pinMode(ledPin, OUTPUT);  // LED as output
}

void loop() 
{
  buttonState = digitalRead(buttonPin); // Read button

  if (buttonState == LOW) // Check if button is pressed
  {
    digitalWrite(ledPin, HIGH);
    delay(5000);
    digitalWrite(ledPin, LOW);
  }
}