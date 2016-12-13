int flame = 0; // select analog pin 0 for the sensor
int beep = 9;  // select digital pin 0 for the buzzer
int val = 0;   // initialize variable

void setup() {
  pinMode(beep, OUTPUT);
  pinMode(flame, INPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(flame); // read the analog value of the sensor
  Serial.println(val);
  if (val >= 600)
  {
    digitalWrite(beep, HIGH);
  } else
  {
    digitalWrite(beep, LOW);
  }
  delay(500);

}
