// Lesson 10: Understanding how to read analog voltage using analog read command
int readPin = A0;
float readVal;
float V2 = 0;
int delay_time=500;
void setup() {
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  readVal=analogRead(readPin);
  V2 = (5./1023.)*readVal;
  Serial.println(V2);
  delay(delay_time);
}

// Observation:
// Voltage | Read value
// 0       | 0
// 5       | 1023
// => v2 = (5/1023)*Read_val
