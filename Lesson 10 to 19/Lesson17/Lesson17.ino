// Lesson 17: While loops
int j=1;
int dt=100;
int potVal;
int readVal;
int potPin = A0;
int redLED = 7;
void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(redLED, OUTPUT); 
}

void loop() {
  potVal = analogRead(potPin);
  Serial.println(potVal);
  while(potVal>500){
    digitalWrite(redLED, HIGH);
    potVal=analogRead(potPin);
    Serial.println(potVal);
    delay(dt);
  }
  digitalWrite(redLED, LOW);
}
