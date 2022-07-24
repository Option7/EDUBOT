#include <EDUBOT.h>

ULTRASONIC ultraSonic();
MOTOR motor(); //IN1, IN2
//MOTOR motorB(10, 11); //IN3, IN4
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
 
void loop() {
  // put your main code here, to run repeatedly:

if (ultraSonic.getDistance() < 30){
motor.leftReverse();
motor.leftForward();
}

if (ultraSonic.getDistance() > 30){
motor.leftForward();
motorB.rightForward();
} 
Serial.println(ultraSonic.getDistance());
}
