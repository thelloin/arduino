int potPin = 0; // Initialize analog pin 0, connected with photovaristor
int ledPin = 11; // Initialize digital pin 11, output regulating the brightness of LED
int val = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(potPin); // Read the analog value of the sensor => val
  Serial.println(val);
  analogWrite(ledPin, val);
  delay(10);
}
