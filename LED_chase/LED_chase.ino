// LED chasing
int BASE = 2; // The I/O pin for the first LED
int NUM = 6; // Number of LEDs

void setup() {
  for (int i = BASE; i < BASE + NUM; i++)
  {
    pinMode(i, OUTPUT); // Set I/O pins as output
  }
}

void loop() {
  for (int i = BASE; i < BASE + NUM; i++)
  {
    digitalWrite(i, LOW);
    delay(70);
    digitalWrite(i, HIGH);
  }
  for (int i = BASE + NUM - 1; i >= BASE; i--)
  {
    digitalWrite(i, LOW);
    delay(70);
    digitalWrite(i, HIGH);
  }

}
