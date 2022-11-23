// Lesson 4: Morse code using variables
// SOS in morse code is . . . ---- . . . 
// Global variables:
int i = 0;
int blueLED = 13;
int redLED = 12;
int greenLED = 11;
int dot_time = 300;
int dash_time = 1000;
int end_delay = 5000;


void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
// // Excercise:
  // for(i=0;i<3;i++){
  // digitalWrite(blueLED,HIGH);
  // delay(dot_time);
  // digitalWrite(blueLED,LOW);
  // delay(dot_time);  
  // }
  
  // for(i=0;i<3;i++){
  // digitalWrite(blueLED,HIGH);
  // delay(dash_time);
  // digitalWrite(blueLED,LOW);
  // delay(dash_time);  
  // }
  
  // for(i=0;i<3;i++){
  // digitalWrite(blueLED,HIGH);
  // delay(dot_time);
  // digitalWrite(blueLED,LOW);
  // delay(dot_time);  
  // }

  // delay(end_delay);

  // Blue LED
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

  // Red LED
  for(i=0;i<3;i++){
  digitalWrite(redLED,HIGH);
  delay(dot_time*1.5);
  digitalWrite(redLED,LOW);
  delay(dot_time*1.5);
  } 
  for(i=0;i<3;i++){ 
  digitalWrite(redLED,HIGH);
  delay(dash_time*1.5);
  digitalWrite(redLED,LOW);
  delay(dash_time*1.5);
  }
  for(i=0;i<3;i++){
  digitalWrite(redLED,HIGH);
  delay(dot_time*1.5);
  digitalWrite(redLED,LOW);
  delay(dot_time*1.5);
  }
  
  // Green LED
  for(i=0;i<3;i++){
  digitalWrite(greenLED,HIGH);
  delay(dot_time*2.5);
  digitalWrite(greenLED,LOW);
  delay(dot_time*2.5);  
  }
  for(i=0;i<3;i++){
  digitalWrite(greenLED,HIGH);
  delay(dash_time*2.5);
  digitalWrite(greenLED,LOW);
  delay(dash_time*2.5);
  }
  for(i=0;i<3;i++){
  digitalWrite(greenLED,HIGH);
  delay(dot_time*2.5);
  digitalWrite(greenLED,LOW);
  delay(dot_time*2.5);  
  }

  delay(end_delay);
}
