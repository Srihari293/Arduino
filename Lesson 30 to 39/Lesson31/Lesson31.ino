// Lesson 31: Combining servos and photo resistors
// Photo detector
#include<Servo.h>
int ServoPin = 9;
int lightVal;
int lightPin = A0;
int dt;
float angle;
Servo myServo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  pinMode(ServoPin, OUTPUT);
  myServo.attach(ServoPin);
}

void loop() {
  // Part 1: Light value test
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(dt);
//  angle = (180.)/(213. - 950.)*(lightVal - 213.);
  angle = (-16./63.)*lightVal + 16.*780./63.;
  Serial.println(angle);
  myServo.write(angle); 
}
