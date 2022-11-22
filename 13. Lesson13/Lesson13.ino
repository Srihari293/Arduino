// Lesson 13: Understanding if statements
int realVal;
int redPin = 9;
int yellowPin = 10;
int greenPin = 11;
int readPin = A0;
int delay_time=1000;
float V2;

void setup() {
  Serial.begin(9600);
  pinMode(readPin,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
  pinMode(greenPin,OUTPUT);

}

void loop() {
  realVal = analogRead(readPin);
  V2 = (5./1023.)*realVal;
  Serial.print("The voltage measured at Vout is: ");
  Serial.print(V2);
  Serial.println("V");

//  // Case 1:
//  if(V2 > 4.)
//  {
//    digitalWrite(redPin, HIGH);
//  }
//  else{
//    digitalWrite(redPin, LOW);
//  }
//  delay(delay_time);


//  // Case 2:
//  if(V2 > 2 && V2 < 3)
//  {
//    digitalWrite(redPin, HIGH);
//  }
//  else{
//    digitalWrite(redPin, LOW);
//  }
//  delay(delay_time); 

// Homework: Green on when voltage is less than 3V, Yellow when voltage is between 3 and 4, Red when voltage is greater than 4V.
  if(V2 > 0 && V2 < 3)
  {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);

  }
  
  if(V2 > 3 && V2 < 4){
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);  
  }

  if(V2>4){
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);      
  }
  delay(delay_time); 






















}
