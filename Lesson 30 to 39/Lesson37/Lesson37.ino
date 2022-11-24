// Lesson 37: How to control a DC motor
int speedPin = 5;
int dirPin1 = 4;
int dirPin2 = 3;
int mSpeed = 255;

void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin, OUTPUT);
  pinMode(dirPin1, OUTPUT);
  pinMode(dirPin2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // CW
  digitalWrite(dirPin1, HIGH);
  digitalWrite(dirPin2, LOW);
  analogWrite(speedPin, mSpeed);
  delay(5000);
  digitalWrite(dirPin1, LOW);
  delay(2000);
//  // CCW
//  digitalWrite(dirPin1, LOW);
//  digitalWrite(dirPin2, HIGH);
//  analogWrite(speedPin, mSpeed);
//  delay(5000);
//  digitalWrite(dirPin2, LOW);
//  delay(2000);
}
