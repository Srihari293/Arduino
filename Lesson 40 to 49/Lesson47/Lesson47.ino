// Lesson 47: Dancing LEDs
int dataPin = 12;
int latchPin = 11;
int clockPin = 9;
int dt = 250;
int dt1 = 500;
int dt2 = 250;
int dt3 = 100;
int i=0;

byte LEDs = 0b10101010;
byte LEDsR = 0b01111111;
byte LEDsL = 0b11111110;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {
  for(i=0; i<10; i++){
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDs); 
  digitalWrite(latchPin, HIGH);
  delay(dt1);
  LEDs = ~LEDs;
  Serial.println(LEDs, BIN);
  }
  i=0;
  for(i=0; i<10; i++){
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDs); 
  digitalWrite(latchPin, HIGH);
  delay(dt2);
  LEDs = ~LEDs;
  Serial.println(LEDs, BIN);
  }
  i=0;
  for(i=0; i<10; i++){
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDs); 
  digitalWrite(latchPin, HIGH);
  delay(dt3);
  LEDs = ~LEDs;
  Serial.println(LEDs, BIN);
  }
  i=0;
  
  // Shifting right
  // LEDsR = LEDsR*128 + (LEDsR/2)
  for(i=0; i<8; i++){
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDsR); 
  digitalWrite(latchPin, HIGH);
  delay(dt);
  LEDsR = LEDsR*128 + (LEDsR/2);
  Serial.println(LEDsR, BIN);
  }
  i=0;
  // Shifting left
  // LEDsL = LEDsL*128 + (LEDsL/2)
  for(i=0; i<8; i++){
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDsL); 
  digitalWrite(latchPin, HIGH);
  delay(dt);
  LEDsL = LEDsL/128 + (LEDsL*2);
  Serial.println(LEDsL, BIN);
  }
}
