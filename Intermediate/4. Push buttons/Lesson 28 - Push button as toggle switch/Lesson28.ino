// Lesson 28: Pushbuttons as Toggle switch
int LEDPin = 8;
int buttonPin = 12;
int buttonRead;
int dt = 250;
int OLD = 1;
int NEW;
int state;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  NEW = digitalRead(buttonPin);
  Serial.println(NEW);
  delay(dt);

  if (OLD == 0 && NEW == 1) {
    if (state == 0) {
      digitalWrite(LEDPin, HIGH);
      state = 1;
    }
    else {
      digitalWrite(LEDPin, LOW);
      state = 0;
    }
  }
  OLD=NEW;
}
