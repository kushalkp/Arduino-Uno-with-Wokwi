#define BUZZER 5
// This is a macro. Replaces all occurences of BUZZER with 5

void setup() 
{
  pinMode(BUZZER, OUTPUT);
}

void loop() 
{
  for (int i = 1; i <= 10; i++)
  {
    tone(BUZZER, 1000, 300); // Beep at 1kHz for 300ms
    delay(500); // silence for 200 ms
    if (i == 5) 
      break; // No beeps after 5th beep
  }
  delay(2000); // repeat after 2 seconds
}