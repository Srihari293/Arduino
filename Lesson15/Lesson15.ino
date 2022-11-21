// Lesson 15: Understanding for loops
int greenPin = 6;
int redPin = 9;
int greenTime = 500;
int redTime = 500;
int i=0;
void setup() {
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for (i=0; i<3; i++){
  digitalWrite(greenPin, HIGH);
  delay(greenTime);
  digitalWrite(greenPin, LOW);
  delay(greenTime);
  }

  for (i=0; i<3; i++){
  digitalWrite(redPin, HIGH);
  delay(redTime);
  digitalWrite(redPin, LOW);
  delay(redTime);
  }

}
