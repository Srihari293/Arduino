// Lesson 43: Binary counter with 74HC595 serial to parallel shift register

int dataPin = 12;
int latchPin = 11;
int clockPin = 9;

byte LEDs = 0b00000000; // We are turning on all LEDs - 1111 1111

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDs); 
  digitalWrite(latchPin, HIGH);
  delay(100);
  LEDs = LEDs + 1;
  Serial.println(LEDs, HEX);
}
