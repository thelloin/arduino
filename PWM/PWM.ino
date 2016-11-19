int potpin = 0; // Initialize analog pin 0
int ledpin = 11; // Initialize digital pin 11
int val = 0; // Temporary store variables value from the sensor

void setup() {
  pinMode(ledpin, OUTPUT); // Define digital pin 11 as output
  Serial.begin(9600); // Set baud rate at 9600

}

void loop() {
  val = analogRead(potpin); // Read the analog value from the sensor and assign it to val
  Serial.println(val); // Display the value of val
  analogWrite(ledpin, val/4); // turn on LED and set up brightness (max output of PWM is 255)
  delay(10); // Wait for 0.01 second

}
