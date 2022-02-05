# EDUBOT

EDUBOT is a library built on top of pre-installed Arduino library with the sole aim to make programming 
very easy and interesting especially for kids and newbies. It maintains the same functionality as the libraries it has been built 
on top whiles making it easier to code. 

This library is not harwdware kit specific and thus works with Arduino compatible boards except for Bluetooth which varies between ARDUINO and ESP32 variants.

EDUBOT BLINK EXAMPLE;

#include <EDUBOT.h>
   
LIGHT light (13); //Declare a LIGHT object

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:

  light.on();  //Turn on light
  delay(1000); //wait 1 sec
  light.off(); //turn off light
  delay(1000); //wait 1 sec
}



TYPICAL ARDUINO BLINK EXAMPLE;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
