// Lesson 18: Reading numbers from the Serial monitor
// Methodology: Ask, wait and read!
int myNumber;
String msg = "Please enter your number";
String msg1 = " Your number is ";

int numBlinks;
int j;
int redPin = 12;
int dt = 500;
String msg2 = " How many blinks do you want? ";

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
}

void loop() {
//  // Case 1:
//  // Ask
//  Serial.println(msg);
//  // Wait
//  while(Serial.available()==0){}
//  // Read
//  myNumber = Serial.parseInt();
//  Serial.print(msg1);
//  Serial.println(myNumber);

// Case 2: How many blinks does the user want?
  // Ask
  Serial.println(msg);
  // Wait
  while(Serial.available()==0){}
  // Read
  numBlinks = Serial.parseInt();
  Serial.print("");
  Serial.println(numBlinks);
  for (j=1;j<=numBlinks;j++){
    digitalWrite(redPin, HIGH);
    delay(dt);
    digitalWrite(redPin, LOW);
    delay(dt);
    Serial.print("We have blinked ");
    Serial.print(j);
    Serial.println(" times");
  }
}
