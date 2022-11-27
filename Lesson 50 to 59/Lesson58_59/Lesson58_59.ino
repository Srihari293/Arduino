// Lesson 58: Creating a portable distance calculator
#include<LiquidCrystal.h>
int triggerPin = 3;
int echoPin = 2;
int pingTravelTime; // in micro seconds
float pingTravelDistance;
float distanceToTarget;

int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.begin(16, 2);
}

void loop() {
  // Ultrasonic sensor stuff
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(10);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pingTravelTime = pulseIn(echoPin, HIGH);
  pingTravelDistance = (pingTravelTime*765.*5280.*12.)/(3600.*1000000.);
  distanceToTarget = pingTravelDistance/2;

//  // Test 
//  Serial.print("Travel time is: ");
//  Serial.print(pingTravelTime);
//  Serial.print(" micro seconds |");
//  Serial.print("Travel distance is: ");
////  Serial.print(distanceToTarget*2.54);
////  Serial.println(" cm");
//  Serial.print(distanceToTarget);
//  Serial.println(" inches");
//  delay(250);

// // Test
//  lcd.setCursor(0,0);
//  lcd.print("Hello world");
//  delay(1000);
//  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Target Distance");
  
  lcd.setCursor(0,1);
  lcd.print(distanceToTarget);
  
  lcd.print(" inches");
  delay(400);
  lcd.clear();
}
