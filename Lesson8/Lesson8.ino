// Lesson 8: Pulse Width Modulation (PWM) and Analog write command
// When we observe the voltage at a point in the circuit. When we look the voltage coming of pin 9, we observe the voltage of around 4.8V
int redPin = 9;
int bright = 127;
void setup() {
  pinMode(redPin, OUTPUT);
}

void loop() {
  analogWrite(redPin, bright);delay(200);
}
