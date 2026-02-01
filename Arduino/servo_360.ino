#include <Servo.h>

Servo miServo;

int pos = 0;

void setup() {
  miServo.attach(22);
}

void loop() {
  // Giro sentido horario
  miServo.write(89);   // 90 grados
  delay(810);

  miServo.write(90); //Detener
  delay(2000);

  // Giro sentido horario
  miServo.write(89);   // 180 grados
  delay(1620);

  miServo.write(90); //Detener
  delay(2000);

  miServo.write(89);   // 270 grados
  delay(2430);

  miServo.write(90); //Detener
  delay(2000);

  miServo.write(89);   // 360 grados
  delay(3240);

  miServo.write(90); //Detener
  delay(2000);

  miServo.write(180);   // 3 Giros
  delay(3240);

  miServo.write(90); //Detener
  delay(2000);
     }
