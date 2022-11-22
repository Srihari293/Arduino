
// Lesson 1:
// 1. Pins 0 to 13 are used for interaction
// 2. Pin 13 is connected to the LED. So let us try to work on pin 13. 
void setup() {
  // What are we working with, what is the number and is it an input or output 
  pinMode(13,OUTPUT);
}

void loop() {
//  // 1. Turn the LED on (HIGH (5V))
//  digitalWrite(13,HIGH);

//  // 2. Turn the LED off (LOW (0V))
//  digitalWrite(13,LOW);

//// 3. Turn on and off
//  digitalWrite(13,HIGH);
//  delay(100);
//  digitalWrite(13,LOW);
//  delay(1000);

// HW: 4. Lowest number to perceive difference (Persistance of vision)
  digitalWrite(13,HIGH);
  delay(20);
  digitalWrite(13,LOW);
  delay(20);
  // ANS: 20ms
}
