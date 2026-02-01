const int ledPin = 22;
const int pwmFreq = 5000;      // Hz
const int pwmResolution = 8;   // bits (0–255)

void setup() {
  ledcAttach(ledPin, pwmFreq, pwmResolution);
}

void loop() {
  ledcWrite(ledPin, 0);
  delay(2000);

  ledcWrite(ledPin, 50);
  delay(2000);

  ledcWrite(ledPin, 100);
  delay(2000);

  ledcWrite(ledPin, 150);
  delay(2000);

  ledcWrite(ledPin, 200);
  delay(2000);

  ledcWrite(ledPin, 250);
  delay(2000);

  ledcWrite(ledPin, 255);
  delay(2000);
}
