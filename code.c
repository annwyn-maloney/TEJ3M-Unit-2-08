/* created by Annwyn M. 08/04/2025
  make a servo spin in sync with a potentiometer */ 

#include <Servo.h>

Servo servoNumber1;

const int ANALOG_PIN = 0; 
float angleOfServo; 

void setup() {
    servoNumber1.attach(9); 
}

void loop() {
    angleOfServo = analogRead(ANALOG_PIN);
    angleOfServo = angleOfServo / 6; 
    servoNumber1.write(angleOfServo); 
}
