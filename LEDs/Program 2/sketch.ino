void setup()
{
  pinMode(5, OUTPUT); // Configure digital pin 5 as output
  // Connected to external LED
}

void loop()
{
  digitalWrite(5, HIGH); // LED on
  delay(1000);
  digitalWrite(5, LOW); // LED off
  delay(1000);
}