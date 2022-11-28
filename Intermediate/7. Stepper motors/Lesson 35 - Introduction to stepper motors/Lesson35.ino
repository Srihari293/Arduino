// Lesson 36: Intro to stepper motor
#include<Stepper.h>
int stepsPerRevolution=2048;
int motSpeed = 15;
Stepper myStepper(stepsPerRevolution,8,9,10,11);

int buttonPin = 2;
int motorDir = 1;
int buttonValNew;
int buttonValOld=1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myStepper.setSpeed(motSpeed);
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
  
}

void loop() {
//  // put your main code here, to run repeatedly:
//  myStepper.step(stepsPerRevolution);
//  delay(100);
//  myStepper.step(-stepsPerRevolution);
//  delay(500);

  buttonValNew = digitalRead(buttonPin);
  if(buttonValOld ==1 && buttonValNew==0){
    motorDir=motorDir*(-1);
  }
  myStepper.step(motorDir*1);
  buttonValOld = buttonValNew;
}
