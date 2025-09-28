int buttonPin = 2;   // Push button connected to pin 2
int ledPin = 5;      // LED connected to pin 5
int buttonState;     // Variable to store button status

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Use internal pull-up (button active LOW)
  pinMode(ledPin, OUTPUT);  // LED as output
}

void loop() {
  buttonState = digitalRead(buttonPin); // Read button

  if (buttonState == LOW) // Button pressed
  {             
    digitalWrite(ledPin, HIGH); // LED ON
  } 
  else // Button not pressed
  {                              
    digitalWrite(ledPin, LOW); // LED OFF
  }
}
