int buzzerPin = 2; // Buzzer connected to Pin 2

void setup() 
{
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);

}

void loop() 
{
  Serial.println("Buzzing");
  tone(buzzerPin, 1000, 1000); // Play a 1 KHz tone for 1000ms or 1sec
  // Avoids noTone()
  delay(1000); // wait while it plays
  Serial.println("No buzz");
  delay(1000); // 1 sec of silence
}