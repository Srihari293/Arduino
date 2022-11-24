
int speedPin = 5;
int dirPin1 = 4;
int dirPin2 = 3;
int mSpeed = 0;
int BP1 = 8;
int BP2 = 9;
int B1val;
int B2val;
int dt = 500;
void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin, OUTPUT);
  pinMode(dirPin1, OUTPUT);
  pinMode(dirPin2, OUTPUT);
  pinMode(BP1, INPUT);
  pinMode(BP2, INPUT);
  digitalWrite(BP1, HIGH);
  digitalWrite(BP2, HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  B1val = digitalRead(BP1);
  B2val = digitalRead(BP2);
//  Serial.print("Button 1 ");
//  Serial.print(B1val);
//  Serial.print(" Button 2 ");
//  Serial.println(B2val);
  Serial.print("Motor speed is ");
  Serial.println(mSpeed);
  if (B1val == 0) {
    mSpeed = mSpeed - 10;
    delay(dt);
  }
  if (B2val == 0) {
    mSpeed = mSpeed + 10;
    delay(dt);
  }
  if (mSpeed > 255){
    mSpeed=255;
  }
  if (mSpeed < -255){
    mSpeed=-255;
  }
  if (mSpeed == 10){
    mSpeed=170;
  }
  if (mSpeed == -10){
    mSpeed=-170;
  }
  if (mSpeed == 90 || mSpeed == 95 || mSpeed == -90 || mSpeed == -95){
    mSpeed=0;
  }
  if(mSpeed == 0){
    analogWrite(speedPin, 0);
  }
  if(mSpeed>0){
    digitalWrite(dirPin1, LOW);
    digitalWrite(dirPin2, HIGH);
    analogWrite(speedPin, mSpeed);
  }
  if(mSpeed<0){
    digitalWrite(dirPin1, HIGH);
    digitalWrite(dirPin2, LOW);
    analogWrite(speedPin, abs(mSpeed));
  }
}
