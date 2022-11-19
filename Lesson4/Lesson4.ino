// Lesson 4: Morse code using variables
// SOS in morse code is . . . ---- . . . 

void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  int i=0;
  for(i=0;i<3;i++){
  digitalWrite(13,HIGH);
  delay(300);
  digitalWrite(13,LOW);
  delay(300);  
  }
  
  for(i=0;i<3;i++){
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);  
  }
  
  for(i=0;i<3;i++){
  digitalWrite(13,HIGH);
  delay(300);
  digitalWrite(13,LOW);
  delay(300);  
  }

  delay(5000);
}
