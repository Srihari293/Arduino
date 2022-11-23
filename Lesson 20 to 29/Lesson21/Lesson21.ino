// Lesson 21: Understanding and mixing primary colours using an RGB LED
int redPin = 9;
int bluePin = 10;
int greenPin = 11;
String myColour;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("What colour do you want?");
  while (Serial.available() == 0) {}
  myColour = Serial.readString();
  myColour.toLowerCase();
  if (myColour == "red") {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }

  if (myColour == "green") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
  }

  if (myColour == "blue") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
  }

  if (myColour == "aqua") {
    analogWrite(redPin, LOW);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 100);
  }

  if (myColour == "yellow") {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 100);
    analogWrite(bluePin, 0);
  }
  if (myColour == "cyan") {
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 255);
  }
  if (myColour == "magenta") {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 255);
  }
  if(myColour == "none"){
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
  }
}
