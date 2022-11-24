// Lesson 30: Understanding and using Servos
#include<Servo.h>
int controlPin = 9;
int pos=170; // degrees
Servo myServo;
void setup() {
  Serial.begin(9600);
  myServo.attach(controlPin);
}

void loop() {
  Serial.println("What angle do you want to go to?");
  while(Serial.available()==0){}
  pos=Serial.parseInt();
  myServo.write(pos);
}
