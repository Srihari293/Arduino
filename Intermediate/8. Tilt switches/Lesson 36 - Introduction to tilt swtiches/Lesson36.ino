// Lesson 36: Tilt switches
int tiltPin = 2;
int tiltVal;
int redPin = 9;
int bluePin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(tiltPin, INPUT);
  digitalWrite(tiltPin, HIGH);
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  tiltVal = digitalRead(tiltPin);
  Serial.println(tiltVal);
  if(tiltVal == 0){
    digitalWrite(redPin, HIGH);
    digitalWrite(bluePin, LOW);
  }
  if(tiltVal == 1){
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, HIGH);
  }
}
