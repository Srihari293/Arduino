// Lesson 55: Measuring the distance with HC-SR04 Sensor
int triggerPin = 12;
int echoPin = 11;
int pingTravelTime; // in micro seconds
float pingTravelDistance;
float distanceToTarget;

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
  pingTravelDistance = (pingTravelTime*765.*5280.*12.)/(3600.*1000000.);
  distanceToTarget = pingTravelDistance/2;
  Serial.print("Travel time is: ");
  Serial.print(pingTravelTime);
  Serial.print(" micro seconds |");
  Serial.print("Travel distance is: ");
//  Serial.print(distanceToTarget*2.54);
//  Serial.println(" cm");
  Serial.print(distanceToTarget);
  Serial.println(" inches");
  delay(250);
}
