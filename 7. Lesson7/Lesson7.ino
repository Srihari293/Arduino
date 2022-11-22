// Lesson 7: Analog Write command

int redPin = 9;
int bright = 255;
void setup() {
  pinMode(redPin, OUTPUT);
}

void loop() {
  // Instead of a digital write we will go with analogWrite()
  // Syntax: analogWrite(pin,[0,255])
  // We have an 8 bit resolution i.e 0-255 for setting voltage from 0-5V
//  analogWrite(redPin, bright);

  // Homwork: Play with brightness
  analogWrite(redPin, bright-25);delay(200);
  analogWrite(redPin, bright-45);delay(200);
  analogWrite(redPin, bright-55);delay(200);
  analogWrite(redPin, bright-75);delay(200);
  analogWrite(redPin, bright-85);delay(200);
  analogWrite(redPin, bright-105);delay(200);
  analogWrite(redPin, bright-125);delay(200);
  analogWrite(redPin, bright-155);delay(200);
  analogWrite(redPin, bright-165);delay(200);
  analogWrite(redPin, bright-185);delay(200);
  analogWrite(redPin, bright-205);delay(200);
  analogWrite(redPin, bright-215);delay(200);
  analogWrite(redPin, bright-225);delay(200);
  analogWrite(redPin, bright-235);delay(200);
  analogWrite(redPin, bright-245);delay(200);
  analogWrite(redPin, bright-255);delay(200);
}
