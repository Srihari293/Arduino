// Lesson 52: Portable temperature and humidity sensor
// Essential libraries:
#include "DHT.h"
#include <LiquidCrystal.h>

// Constants:
#define Type DHT11

// Variables:
int sensorPin = 2;
float humidity;
float tempC;
float tempF;
int dt=100;
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

// Object instantiations
DHT HT(sensorPin, Type);
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Set-up
void setup() {
  Serial.begin(9600);
  HT.begin();
  delay(dt);
  lcd.begin(16, 2);
}

// Loop
void loop() {
  humidity = HT.readHumidity();
  tempC = HT.readTemperature();
  tempF = HT.readTemperature(true);
  
  lcd.setCursor(0,0);
  lcd.print("Temp F = ");
  lcd.print(tempF);

  lcd.setCursor(0,1);
  lcd.print("Humidity = ");
  lcd.print(humidity);
  lcd.print(" %");
  delay(500);
  lcd.clear();
  
  
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" Temperature C: ");
  Serial.print(tempC);
  Serial.print(" Temperature F: ");
  Serial.println(tempF);
//  delay(dt);
}
