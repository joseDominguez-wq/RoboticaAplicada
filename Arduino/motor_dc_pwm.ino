int in1 = 8;
int in2 = 7;
int ena = 9;

void setup() {
  pinMode(in1, OUTPUT); 
  pinMode(in2, OUTPUT); 
  pinMode(ena, OUTPUT);
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(ena, 0);
  delay(1000); 
}

void loop() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  for (int v = 100; v <= 255; v = v + 10) {
    analogWrite(ena, v);
    delay(500);
  }

  delay(2000);

  analogWrite(ena, 0);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  delay(2000);

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  for (int v = 100; v <= 255; v = v + 10) {
    analogWrite(ena, v);
    delay(500);
  }

  delay(2000);

  analogWrite(ena, 0);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  delay(3000); 
}
