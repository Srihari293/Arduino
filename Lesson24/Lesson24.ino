// Lesson 24: Understanding a passive buzzer
int buzzpin = 8;
int buzztime1 = 1;
int buzztime2 = 500;
int potVal;
int potPin = A0;
int Tone;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzpin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {
//  // put your main code here, to run repeatedly:
//  digitalWrite(buzzpin, HIGH);
////  delay(buzztime1);
//  delayMicroseconds(buzztime2);
//  digitalWrite(buzzpin, LOW);
//  delayMicroseconds(buzztime2);

  // Potentiometer controlled buzzer
  potVal = analogRead(potPin);
  Tone = (9940./1023.)*potVal + 60;
  digitalWrite(buzzpin, HIGH);
  delayMicroseconds(Tone);
  digitalWrite(buzzpin, LOW);
  delayMicroseconds(Tone);
}
