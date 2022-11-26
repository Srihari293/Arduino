// Lesson 46: Binary bit flipper using a 74HC595

int dataPin = 12;
int latchPin = 11;
int clockPin = 9;
int dt1 = 500;

byte LEDs = 0b10101010;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {
  // Ex 1: Bit flipper
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDs); 
  digitalWrite(latchPin, HIGH);
  delay(dt1);
  LEDs = ~LEDs;
  Serial.println(LEDs, BIN);
}
