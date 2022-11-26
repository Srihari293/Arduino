// Lesson 42: How to use a serial to parallel shift register
int dataPin = 12;
int latchPin = 11;
int clockPin = 9;

byte LEDs = 0xFE; // We are turning on all LEDs - 1111 1111

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//  // Case:1 
//  digitalWrite(latchPin, LOW);
//  //Syntax: shiftOut(data in number, clock pin number, order of sending data, data packet)
//  shiftOut(dataPin, clockPin, LSBFIRST, LEDs); //Syntax: shiftOut(data in number, clock pin number, order of sending data, data packet)
//  digitalWrite(latchPin, HIGH);
  
  // Case:2
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, 0xFE); 
  digitalWrite(latchPin, HIGH);
  delay(500);
  
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, 0xFD); 
  digitalWrite(latchPin, HIGH);
  delay(500);
  
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, 0xFB); 
  digitalWrite(latchPin, HIGH);
  delay(500);

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, 0xF7); 
  digitalWrite(latchPin, HIGH);
  delay(500);

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, 0xEF); 
  digitalWrite(latchPin, HIGH);
  delay(500);

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, 0xDF); 
  digitalWrite(latchPin, HIGH);
  delay(500);

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, 0xBF); 
  digitalWrite(latchPin, HIGH);
  delay(500);
  
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, 0x7F); 
  digitalWrite(latchPin, HIGH);
  delay(500);
}
//1111 1110 - 0xFE
//1111 1101 - 0xFD
//1111 1011 - 0xFB
//1111 0111 - 0xF7
//1110 1111 - 0xEF
//1101 1111 - 0xDF
//1011 1111 - 0xBF
//0111 1111 - 0x7F
