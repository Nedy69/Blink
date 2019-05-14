/*

Beacause you are stupid idiot, I have to write some informations about this project.
When you want to connect this fucking LED to fucking Arduino (You have to use original Arduino Mega),
you have to take 2 jumpers. 1 red jumper and 1 blue jumper (NO OTHER, ONLY THAT COLOURS)
RED jumper connect to catode of LED and to second digital pin on that fucking Arduino.
Blue jumper conncet to annode of LED and to minuz of that fucking Arduino .
Thats it. IDIOT.

@author Nedy69

*/


#include <servo.h>                 //include some useless libraries 
#include <EEPROM.h>
#include <RBD_Timer.h>
#include <RBD_Light.h>

#define LED 2

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
}
