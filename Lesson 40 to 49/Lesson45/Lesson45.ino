// Lesson 45: Circular Shift Right and Circular Shift Left

int dataPin = 12;
int latchPin = 11;
int clockPin = 9;
int dt = 500;

byte LEDsR = 0b10000000;
byte LEDsL = 0b00000001;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {
  // Shifting right
  // LEDsR = LEDsR*128 + (LEDsR/2)
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDsR); 
  digitalWrite(latchPin, HIGH);
  delay(dt);
  LEDsR = LEDsR*128 + (LEDsR/2);
  Serial.println(LEDsR, BIN);

//  // Shifting left
//  // LEDsL = LEDsL*128 + (LEDsL/2)
//  digitalWrite(latchPin, LOW);
//  shiftOut(dataPin, clockPin, LSBFIRST, LEDsL); 
//  digitalWrite(latchPin, HIGH);
//  delay(dt);
//  LEDsL = LEDsL/128 + (LEDsL*2);
//  Serial.println(LEDsL, BIN);
}
