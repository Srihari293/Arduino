// Lesson 8: Pulse Width Modulation (PWM) and Analog write command
// When we observe the voltage at a point in the circuit. 
// When we look the voltage coming of pin 9, when bright is 255, we observe the voltage of around 4.8V as a straight line
// When we look the voltage coming of pin 9, when bright is 127, we observe the voltage of around 2.3V as a jumping up and down to average the voltage.
// We are at 5 at half the time and 0 half the time, thereby averaging the voltage to 2.5. We have 4.2 divisions and 0.5 ms/div. The time period is 4ms.

// Adding a capcitor in the circuit will smoothen the signal
int redPin = 9;
int bright = 127;

void setup() {
  pinMode(redPin, OUTPUT);
}

void loop() {
  analogWrite(redPin, bright);delay(200);
}
