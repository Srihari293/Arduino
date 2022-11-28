// Lesson 38: Incorporating a tilt switch to cut off DC motors
int speedPin = 5;
int dirPin1 = 4;
int dirPin2 = 3;
int mSpeed = 255;
int tiltPin = 2;
int state;
void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin, OUTPUT);
  pinMode(dirPin1, OUTPUT);
  pinMode(dirPin2, OUTPUT);
  pinMode(tiltPin, INPUT);
  digitalWrite(tiltPin, HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // CW
  state = digitalRead(tiltPin);
  digitalWrite(dirPin1, HIGH);
  digitalWrite(dirPin2, LOW);
  Serial.print("Current state is: ");
  Serial.println(state);
  // Upright:
  if (state == 0) {
    analogWrite(speedPin, mSpeed);
  }
  if (state == 1) {
    analogWrite(speedPin, 0);
  }
//  delay(5000);
  //  // CCW
  //  digitalWrite(dirPin1, LOW);
  //  digitalWrite(dirPin2, HIGH);
  //  analogWrite(speedPin, mSpeed);
  //  delay(5000);
  //  digitalWrite(dirPin2, LOW);
  //  delay(2000);
}
