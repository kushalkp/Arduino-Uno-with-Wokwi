int buzzerPin = 2; // Buzzer connected to Pin 2

void setup() 
{
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);

}

void loop() 
{
  tone(buzzerPin, 1000); // Play a 1 KHz tone
  Serial.println("Buzzing");
  delay(500);
}
