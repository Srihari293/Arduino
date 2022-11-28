// Lesson 61: Calibration and improving precision of distance measurements
#include<LiquidCrystal.h>

// Ultrasonic sensor
int triggerPin = 3;
int echoPin = 2;
int pingTravelTime; // in micro seconds
float pingTravelDistance;
float distanceToTarget;

// LCD display
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Button
int buttonPin = A0;
int buttonVal;

// Precision
int num = 50;
int avg;
int j;
int total;

void setup() {
  Serial.begin(9600);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.begin(16, 2);
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin ,HIGH);
}

void loop() {
  // 3. Button:
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Fix target");
  delay(2000);
  lcd.setCursor(0,1);
  lcd.print("Press to measure");
  buttonVal = digitalRead(buttonPin);
  while(buttonVal==1){
    buttonVal = digitalRead(buttonPin);
    }
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Calibrating");
  delay(750);
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Calibrating .");
  delay(750);
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Calibrating ..");
  delay(750);
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Calibrating ...");
  delay(750);
  
  for(j=1; j<=num; j++){
  // 1. Ultrasonic sensor 
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(10);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pingTravelTime = pulseIn(echoPin, HIGH);
  pingTravelDistance = (pingTravelTime*765.*5280.*12.)/(3600.*1000000.);
  distanceToTarget = pingTravelDistance/2; 
  total += distanceToTarget;
  }
  avg = total/num;

  //2. LCD display
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Avg Distance");
  lcd.setCursor(0,1);
  lcd.print(distanceToTarget);
  lcd.print(" inches");
  delay(5000);
}
