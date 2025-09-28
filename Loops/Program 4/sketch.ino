//Keep waiting for a valid input using while
char command;

void setup() 
{
  Serial.begin(9600);
  Serial.println("Enter 'Y' to turn ON LED or 'N' to turn it OFF.");
  pinMode(5, OUTPUT);
}

void loop() 
{
  // Wait until something is typed
  while (Serial.available() == 0) 
  {
    ;// Do nothing, just wait
  }

  command = Serial.read();

  if (command == 'Y' || command == 'y') 
  {
    digitalWrite(5, HIGH);
    Serial.println("LED turned ON");
  } 
  else if (command == 'N' || command == 'n') 
  {
    digitalWrite(5, LOW);
    Serial.println("LED turned OFF");
  } 
  else 
    Serial.println("Invalid input. Please enter Y or N.");
}