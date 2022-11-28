// Lesson 34: Simplest way to add a pushbutton swtich
int button = 2;
int buttonVal;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button, INPUT);
  digitalWrite(button,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal=digitalRead(button);
  Serial.print("Your button is: ");
  Serial.println(buttonVal);
  delay(100);
}
