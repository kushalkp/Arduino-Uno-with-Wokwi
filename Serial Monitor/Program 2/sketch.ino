int counter = 0; // Declare a counter variable

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.print("Counter value: ");
  Serial.println(counter); // Print value and move to next line
  counter++; // Increase counter by 1
  delay(1000); // Wait for 1 second before repeating
}