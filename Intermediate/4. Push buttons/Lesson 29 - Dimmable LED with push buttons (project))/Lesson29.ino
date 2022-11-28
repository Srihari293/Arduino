// Lesson 29: Dimmable LED using a push button
// Button variables:
int buttonPin1 = 12;
int buttonPin2 = 11;
int buttonVal1;
int buttonVal2;
int dt=250;

// LED
int LEDbright=200;
int LEDpin = 3;

// Buzzer
int buzzPin = 2;
void setup() {
  Serial.begin(9600);
  
  // Button setup:  
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);

  // LED
  pinMode(LEDpin, OUTPUT);

  // Buzzer
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  // Button read
  buttonVal1 = digitalRead(buttonPin1);
  buttonVal2 = digitalRead(buttonPin2);
  
  // Button test
  Serial.print("Button 1 = ");
  Serial.print(buttonVal1);
  Serial.print(", ");
  Serial.print("Button 2 = ");
  Serial.println(buttonVal2);
  delay(dt);

  // Increase or decrease?
  if(buttonVal1 == 0){
    LEDbright = LEDbright+5;
  }
  
  if(buttonVal2 == 0){
    LEDbright = LEDbright-5;
  }
  
  if(LEDbright>=255){
    LEDbright = 255;
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin, LOW);
  }

  if(LEDbright<=0){
    LEDbright = 0;
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin, LOW);
  }
  
  // LED
  Serial.println(LEDbright);
  analogWrite(LEDpin, LEDbright);
  
}
