// Lesson 50: How to connect and use the DHT11 temperature and pressure sensor
#include "DHT.h"
#define Type DHT11
int sensorPin = 2;
DHT HT(sensorPin, Type);
float humidity;
float tempC;
float tempF;
int dt=100;

void setup() {
  Serial.begin(9600);
  HT.begin();
  delay(dt);

}

void loop() {
  // put your main code here, to run repeatedly:
  humidity = HT.readHumidity();
  tempC = HT.readTemperature();
  tempF = HT.readTemperature(true);
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" Temperature C: ");
  Serial.print(tempC);
  Serial.print(" Temperature F: ");
  Serial.println(tempF);
  delay(dt);
}
