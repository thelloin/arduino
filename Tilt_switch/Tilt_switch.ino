int i;

void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  i = analogRead(5); // Read the voltage value of analog pin 5
  if (i > 512) // if larget than 512 (2.5V)
  {
    digitalWrite(8, LOW); // turn of LED
  }
  else
  {
    digitalWrite(8, HIGH); // turn off LED
  }
}
