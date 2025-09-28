int potPin = A0;       // Analog pin connected to potentiometer
float temperature;

void setup() 
{
  pinMode(5, OUTPUT); // RED
  pinMode(6, OUTPUT); // Blue
  pinMode(7, OUTPUT); // Green
  Serial.begin(9600);
}

void loop() 
{
  int potValue = analogRead(potPin);  // Read potentiometer (0-1023)
  temperature = map(potValue, 0, 1023, 0, 50); // Map to 0°C - 50°C

  // Turn off all LEDs first
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);

  // Light LED based on temperature
  if (temperature < 20.0)
    digitalWrite(6, HIGH);  // Blue - Cold 
  else if (temperature <= 30.0)
    digitalWrite(7, HIGH);  // Green - Comfortable
  else
    digitalWrite(5, HIGH);  // Red - Hot

  // Print temperature on Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  delay(200); // Small delay for stability
}
