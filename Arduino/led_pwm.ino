const int ledPin = 9; // Pin PWM (3, 5, 6, 9, 10 u 11)

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  analogWrite(ledPin, 50);   
  delay(5000);               

  analogWrite(ledPin, 100);  
  delay(6000);    

  analogWrite(ledPin, 250);  
  delay(6000);
/* 
  analogWrite(ledPin, 200);  
  delay(3000);    

  analogWrite(ledPin, 200);  
  delay(3000);  

  analogWrite(ledPin, 250);  
  delay(3000);  

  analogWrite(ledPin, 150);  
  delay(3000);  

  analogWrite(ledPin, 0);  
  delay(3000); */      
}
