// Lesson 39: Using a joystick to control dc motor speed and direction
int speedPin = 5;
int dirPin1 = 4;
int dirPin2 = 3;
int mSpeed = 200;
int jPin = A0;
int jVal;
void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin, OUTPUT);
  pinMode(dirPin1, OUTPUT);
  pinMode(dirPin2, OUTPUT);
  pinMode(jPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  jVal = analogRead(jPin);
  Serial.println(jVal);
  // put your main code here, to run repeatedly:
  // CW
  if (jVal < 512) {
    digitalWrite(dirPin1, LOW);
    digitalWrite(dirPin2, HIGH);
    mSpeed = -255. / 512 * jVal + 255.;
    analogWrite(speedPin, mSpeed);
  }
  if (jVal >= 512) {
    digitalWrite(dirPin1, HIGH);
    digitalWrite(dirPin2, LOW);
    mSpeed = 255. / 512 * jVal - 255.;
    analogWrite(speedPin, mSpeed);
  }

}
