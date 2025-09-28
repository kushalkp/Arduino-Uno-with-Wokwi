char command;

void setup() 
{
  Serial.begin(9600);
  pinMode(5, OUTPUT); // RED LED
  pinMode(6, OUTPUT); // Blue LED
  pinMode(7, OUTPUT); // Green LED
  Serial.println("Enter command: 1, 2, or 3 to toggle LEDs");
}

void loop() 
{
  if (Serial.available() > 0) 
  {
    command = Serial.read();

    // Ignore newline and carriage return
    if (command == '\n' || command == '\r')
      ;// do nothing, skip this loop iteration
    else 
    {
      switch(command) 
      {
        case '1':
          digitalWrite(5, !digitalRead(5)); // Toggle RED
          Serial.println("LED1 toggled");
          break;
        case '2':
          digitalWrite(6, !digitalRead(6)); // Toggle Blue
          Serial.println("LED2 toggled");
          break;
        case '3':
          digitalWrite(7, !digitalRead(7)); // Toggle Green
          Serial.println("LED3 toggled");
          break;
        default:
          Serial.println("Invalid command");
      }
    }
  }
}
