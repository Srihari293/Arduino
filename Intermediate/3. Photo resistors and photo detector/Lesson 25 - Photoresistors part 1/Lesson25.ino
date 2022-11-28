// Lesson 25: Understanding Photoresistors and Photo detectors
int lightPin = A0;
int lightVal;
int dt = 250;
int redPin=10;
int greenPin=11;
void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin, INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(dt);
  if(lightVal>0 && lightVal <500){
  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, LOW);
  }
  
  if(lightVal>500 && lightVal <1100){
  digitalWrite(greenPin, LOW);
  digitalWrite(redPin, HIGH);  
  }
}
