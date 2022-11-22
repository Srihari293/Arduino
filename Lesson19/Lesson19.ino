// Lesson 19: Reading Strings from the serial monitor
String msg1 = "What is your name?";
String msg2 = "Hello ";
String msg3 = ", Welcome to Arduio!";
String myName;

int redPin = 12;
int bluePin = 10;
int greenPin = 11;
String myColour;
String msg= "What colour LED do you want?";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
//  Serial.println(msg1);
//  while(Serial.available()==0){}
//  myName = Serial.readString();
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
// // Exercise 1:
//  Serial.print(msg2);
//  Serial.print(myName);
//  Serial.println(msg3);
//  delay(10000);

// Excercise 2:
  Serial.println(msg);
  while(Serial.available()==0){}
  myColour = Serial.readString();
  myColour.toLowerCase();
  if (myColour == "red"){
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }

  if (myColour == "green"){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
  }

  if (myColour == "blue"){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
  }
  else{
    digitalWrite(redPin, HIGH);
    delay(500);
    digitalWrite(redPin, LOW);
    delay(500);

    digitalWrite(greenPin, HIGH);
    delay(500);
    digitalWrite(greenPin, LOW);
    delay(500);

    digitalWrite(bluePin, HIGH);
    delay(500);
    digitalWrite(bluePin, LOW);
    delay(500);

    Serial.println("Colour unavailable, please try with Red, Blue and Green");
  }
}
