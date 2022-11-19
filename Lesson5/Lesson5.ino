// Lesson 5: Working with binary numbers
// Homework:
int x1 = 10;
int x2 = 11;
int x3 = 12;
int x4 = 13;
int lit_time = 500;
void setup() {
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
   digitalWrite(x1,LOW) ;digitalWrite(x2,LOW) ;digitalWrite(x3,LOW) ;digitalWrite(x4,LOW) ;delay(lit_time);
   digitalWrite(x1,LOW) ;digitalWrite(x2,LOW) ;digitalWrite(x3,LOW) ;digitalWrite(x4,HIGH);delay(lit_time);
   digitalWrite(x1,LOW) ;digitalWrite(x2,LOW) ;digitalWrite(x3,HIGH);digitalWrite(x4,LOW) ;delay(lit_time);
   digitalWrite(x1,LOW) ;digitalWrite(x2,LOW) ;digitalWrite(x3,HIGH);digitalWrite(x4,HIGH);delay(lit_time);  
   digitalWrite(x1,LOW) ;digitalWrite(x2,HIGH);digitalWrite(x3,LOW) ;digitalWrite(x4,LOW) ;delay(lit_time);
   digitalWrite(x1,LOW) ;digitalWrite(x2,HIGH);digitalWrite(x3,LOW) ;digitalWrite(x4,HIGH);delay(lit_time);
   digitalWrite(x1,LOW) ;digitalWrite(x2,HIGH);digitalWrite(x3,HIGH);digitalWrite(x4,LOW) ;delay(lit_time);
   digitalWrite(x1,LOW) ;digitalWrite(x2,HIGH);digitalWrite(x3,HIGH);digitalWrite(x4,HIGH);delay(lit_time);
   digitalWrite(x1,HIGH);digitalWrite(x2,LOW) ;digitalWrite(x3,LOW) ;digitalWrite(x4,LOW) ;delay(lit_time);
   digitalWrite(x1,HIGH);digitalWrite(x2,LOW) ;digitalWrite(x3,LOW) ;digitalWrite(x4,HIGH);delay(lit_time);
   digitalWrite(x1,HIGH);digitalWrite(x2,LOW) ;digitalWrite(x3,HIGH);digitalWrite(x4,LOW) ;delay(lit_time);
   digitalWrite(x1,HIGH);digitalWrite(x2,LOW) ;digitalWrite(x3,HIGH);digitalWrite(x4,HIGH);delay(lit_time);
   digitalWrite(x1,HIGH);digitalWrite(x2,HIGH);digitalWrite(x3,LOW) ;digitalWrite(x4,LOW) ;delay(lit_time);
   digitalWrite(x1,HIGH);digitalWrite(x2,HIGH);digitalWrite(x3,LOW) ;digitalWrite(x4,HIGH);delay(lit_time);
   digitalWrite(x1,HIGH);digitalWrite(x2,HIGH);digitalWrite(x3,HIGH);digitalWrite(x4,LOW) ;delay(lit_time);
   digitalWrite(x1,HIGH);digitalWrite(x2,HIGH);digitalWrite(x3,HIGH);digitalWrite(x4,HIGH);delay(lit_time);
}
