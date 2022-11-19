// Lesson 4: Morse code using variables
// SOS in morse code is . . . ---- . . . 
// Global variables:
int i = 0;
int blueLED = 13;
int dot_time = 300;
int dash_time = 1000;
int end_delay = 5000;


void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  for(i=0;i<3;i++){
  digitalWrite(blueLED,HIGH);
  delay(dot_time);
  digitalWrite(blueLED,LOW);
  delay(dot_time);  
  }
  
  for(i=0;i<3;i++){
  digitalWrite(blueLED,HIGH);
  delay(dash_time);
  digitalWrite(blueLED,LOW);
  delay(dash_time);  
  }
  
  for(i=0;i<3;i++){
  digitalWrite(blueLED,HIGH);
  delay(dot_time);
  digitalWrite(blueLED,LOW);
  delay(dot_time);  
  }

  delay(end_delay);
}
