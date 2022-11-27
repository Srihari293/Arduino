// Lesson 56: Graphing live data using serial plotter
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
  Serial.print(0);
  Serial.print(",");
  Serial.print(distanceToTarget);
  Serial.print(",");
  Serial.println(10);
  delay(500);
}
