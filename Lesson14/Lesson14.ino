// Lesson 14: Dimmable LED project - using potentiometer
int potPin =  A0;
int LED = 10;
int potVal;
float LEDVal;
float slope = (255./1023.);
void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  potVal = analogRead(potPin);
  LEDVal = potVal * slope;
  analogWrite(LED, LEDVal);
  Serial.println(LEDVal);
}
