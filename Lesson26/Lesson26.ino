// Lesson 26: More fun with Photo resistance
int lightPin = A0;
int soundPin = 10;
float lightVal;
float dt;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin,INPUT);
  pinMode(soundPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  dt = (9./550.)*lightVal - (12.*(200./550.)) + 1.;
  Serial.println(dt);
  digitalWrite(soundPin, HIGH);
  delay(dt);
  digitalWrite(soundPin, LOW);
  delay(dt);
}
