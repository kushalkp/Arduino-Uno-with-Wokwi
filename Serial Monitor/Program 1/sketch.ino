void setup()
{
  Serial.begin(9600); // Start serial communication at 9600 bits/sec
  Serial.print("Hello"); //Print text (stays on the same line)
  Serial.print(" World!"); // Continue on the same line
  Serial.println(" <- This ends with a new line"); // Print and move to the next line
  Serial.print("Exiting..."); // This message is printed on a new line
}

void loop()
{
  // Nothing here, code runs only once in setup() 
}