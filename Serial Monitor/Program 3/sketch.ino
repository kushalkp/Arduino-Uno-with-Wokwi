char command; // Variable to store the received character

void setup()
{
  Serial.begin(9600);
  Serial.println("Enter a character: ");
}

void loop()
{
  // Check if data is available in Serial Monitor
  if (Serial.available() > 0)
  {
    command = Serial.read(); // Read one character
    
    // Ignore non-printable characters like newline and carriage return
    if (command != '\n' && command != '\r')
    {
      Serial.print("You entered: ");
      Serial.println(command);
      Serial.println("Enter a character: ");
    }
  }
}