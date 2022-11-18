// Lesson 3: How do bread boards work?

void setup() {
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
//  // 1. Basic single LED configuration
//  digitalWrite(13,HIGH);
//  delay(50);
//  digitalWrite(13,LOW);
//  delay(50);

  // Homework
  // Question: Have 3 LEDs blink successively 5,10 and 15 times

  // Solution:
  int i=0;

  // RED LED
  for(i=0;i<5;i++){
  digitalWrite(13,HIGH);
  delay(300);
  digitalWrite(13,LOW);
  delay(300);  
  }

  // BLUE LED
  for(i=0;i<10;i++){
  digitalWrite(12,HIGH);
  delay(300);
  digitalWrite(12,LOW);
  delay(300);  
  }

  // GREEN LED
  for(i=0;i<15;i++){
  digitalWrite(11,HIGH);
  delay(300);
  digitalWrite(11,LOW);
  delay(300);  
  }
  
}
