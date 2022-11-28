// Lesson 54: Measuring the speed of sound with HC-SR04 Sensor
int triggerPin = 12;
int echoPin = 11;
int pingTravelTime;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(10);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pingTravelTime = pulseIn(echoPin, HIGH);
  Serial.print("Travel time is: ");
  Serial.println(pingTravelTime);
  delay(25);
}
