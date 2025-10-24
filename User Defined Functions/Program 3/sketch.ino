float readTemp(int pin) 
{
  int sensorValue = analogRead(pin); // Read analog value from sensor
  float tempC = (1 / (log(1 / (1023.0 / sensorValue - 1)) / 3950 + 1.0 / 298.15) - 273.15); // Convert to C using NTC formula
  return tempC; // Return temperature value
}

void setup() 
{
  Serial.begin(9600); // Initialize serial communication
}

void loop() 
{
  float temperature = readTemp(A0); // Get temperature from sensor on A0
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" Celcius"); // Display temperature in C
  delay(1000); // Wait 1 second before next reading
}