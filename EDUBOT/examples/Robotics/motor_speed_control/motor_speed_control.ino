#include <EDUBOT.h>


MOTOR motorA(9, 8, 12); //IN1, IN2, ENA
MOTOR motorB(10, 11, 13); //IN3, IN4, ENB
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
 
void loop() {
  // put your main code here, to run repeatedly:

motorA.speed(50);
motorA.reverse();
motorB.speed(50);
motorB.forward();

}
