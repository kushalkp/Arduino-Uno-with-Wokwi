void setup()
{
  pinMode(LED_BUILTIN, OUTPUT); // Set on-board LED as output
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); // LED on
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW); // LED off
  delay(1000);
}