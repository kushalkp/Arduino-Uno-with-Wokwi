char choice;

void setup() 
{
  pinMode(5, OUTPUT); // Pin 5 output -- Red LED
  pinMode(6, OUTPUT); // Pin 6 output -- Blue LED
  pinMode(7, OUTPUT); // Pin 7 output -- Green LED
  Serial.begin(9600);
  Serial.println("Enter your choice: ");
  // Enter 1 to toggle Red, 2 to toggle Blue and 3 to toggle Green LED
}

void loop() 
{
  if (Serial.available() > 0)
  {
    choice = Serial.read();
    if (choice != '\n' && choice != 'r')
    {
      if (choice == '1') // Toggle RED LED
        digitalWrite(5, !digitalRead(5)); // Toggle = write opposite of current state
      else if (choice == '2') // Toggle Blue LED
        digitalWrite(6, !digitalRead(6));
      else if (choice == '3') // Toggle Green LED
        digitalWrite(7, !digitalRead(7));

      Serial.println("Enter your choice: "); // Prompt again
    }
  }
}