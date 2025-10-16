int leds[] = {2, 3, 4, 5, 6};
int ledCount = sizeof(leds)/sizeof(leds[0]);

void setup() 
{
  for (int i = 0; i < ledCount; i++)
    pinMode(leds[i], OUTPUT);
  Serial.begin(9600); // Initialize serial monitor for temp. display
}

void loop() 
{
  int sensorValue = analogRead(A0); // Read analog input from temperature sensor
  // Sensor output connected to Pin A0
  float tempC = (1 / (log(1 / (1023.0 / sensorValue - 1)) / 3950 + 1.0 / 298.15) - 273.15);
  // NTC thermistor formula approximation

  // Display temperature on serial monitor
  Serial.print("Temp: ");
  Serial.print(tempC);
  Serial.println(" Celcius");

  int level; // Number of LEDs to turn ON based on temperature range

  if (tempC < 20) 
    level = 0; // Below 20C, no LEDs
  else if (tempC >= 20 && tempC < 24)
    level = 1; // 20 - 24C, 1 LED
  else if (tempC >= 24 && tempC < 28)
    level = 2; // 24 - 28C, 2 LEDs
  else if (tempC >= 28 && tempC < 32)
    level = 3; // 28 - 32C, 3 LEDs
  else if (tempC >= 32 && tempC < 36)
    level = 4; // 32 - 36C, 4 LEDs
  else
    level = 5; // Above 36C, 5 LEDs

  // Turn on LEDs according to level
  for (int i = 0; i < ledCount; i++)
  {
    if (i < level)
      digitalWrite(leds[i], HIGH); // Turn ON LEDs up to current level
    else
      digitalWrite(leds[i], LOW); // Turn OFF remaining LEDs
  }

  delay(1000);
}
