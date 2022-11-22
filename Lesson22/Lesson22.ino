// Lesson 22: Using buzzers with arduino
int potVal;
int dt = 2000;
int buzzpin = 10;
int potPin=A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzpin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  Serial.println(potVal);
  while(potVal>500){
    digitalWrite(buzzpin, HIGH);
    potVal = analogRead(potPin);
    Serial.println(potVal);
  }
  digitalWrite(buzzpin, LOW);
}
