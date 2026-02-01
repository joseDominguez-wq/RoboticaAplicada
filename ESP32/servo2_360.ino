#include <Servo.h>

Servo miServo;

const int pinServo = 18; // Pin GPIO al que está conectado el servo

void setup() 
{
  miServo.attach(pinServo);
}

void loop() {
  // Giro sentido horario
  miServo.write(88);   // 90 grados
  delay(810);

  miServo.write(90); //Detener
  delay(2000);

  // Giro sentido horario
  miServo.write(88);   // 180 grados
  delay(1620);

  miServo.write(90); //Detener
  delay(2000);

  miServo.write(88);   // 270 grados
  delay(2430);

  miServo.write(90); //Detener
  delay(2000);

  miServo.write(88);   // 360 grados
  delay(3240);

  miServo.write(90); //Detener
  delay(2000);

  miServo.write(120);   // 3 Giros
  delay(3240);

  miServo.write(90); //Detener
  delay(2000);
}
