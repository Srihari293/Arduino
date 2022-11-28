// Lesson 12: Intro to potentiometer
int readPin = A0;
int realVal;
float V2;
int delay_time=1000;
void setup() {
  Serial.begin(9600);
  pinMode(readPin,OUTPUT);
}

void loop() {
  realVal = analogRead(readPin);
  V2 = (5./1023.)*realVal;
  Serial.print("The voltage measured at Vout is: ");
  Serial.print(V2);
  Serial.println("V");
  delay(delay_time);
}
