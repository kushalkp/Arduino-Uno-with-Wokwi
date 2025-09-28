void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT); // Built-in LED
}

void loop() 
{
  for (int i = 1; i <= 5; i++) // Run 5 times
  {
    digitalWrite(LED_BUILTIN, HIGH); // Turn on LED
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW); // Turn off LED
    delay(1000);
  }
  // LED is currently OFF
  while(1); // stay OFF indefinitely
}