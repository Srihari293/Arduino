#include<IRremote.h>
int IRpin = 9;
String myCommand;

int speedPin = 5;
int dir1 = 4;
int dir2 = 3;
int mSpeed = 120;
int count = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  IrReceiver.begin(IRpin, ENABLE_LED_FEEDBACK);

  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  digitalWrite(dir1, HIGH);
  digitalWrite(dir2, LOW);
}

void loop() {
  while (IrReceiver.decode() == 0) {}
  Serial.print(IrReceiver.decodedIRData.decodedRawData, HEX);
  Serial.print(": ");
  delay(500);
  IrReceiver.resume();
  if (IrReceiver.decodedIRData.decodedRawData == 0xBA45FF00) {
    myCommand = "Power";
    Serial.println(myCommand);
    count++;
    if (count % 2 == 1) {
      digitalWrite(dir1, LOW);
      digitalWrite(dir2, HIGH);
      analogWrite(speedPin, mSpeed);
      // Tests
      Serial.print("Count is: ");
      Serial.print(count);
      Serial.println(". Motor is turning on");
    }

    if (count % 2 == 0) {
      digitalWrite(dir1, LOW);
      digitalWrite(dir2, LOW);
      analogWrite(speedPin, mSpeed);
      // Tests
      Serial.print("Count is: ");
      Serial.print(count);
      Serial.println(". Motor is turning off");
    }
  }
  if (IrReceiver.decodedIRData.decodedRawData == 0xB946FF00) {
    myCommand = "Volume+";
    Serial.println(myCommand);
    Serial.print("Increasing speed from ");
    Serial.print(mSpeed);
    mSpeed = mSpeed + 15;
    if (mSpeed > 255) {
      mSpeed = 255;
    }
    analogWrite(speedPin, mSpeed);
    Serial.print(" to ");
    Serial.println(mSpeed);

  }
  if (IrReceiver.decodedIRData.decodedRawData == 0xEA15FF00) {
    myCommand = "Volume-";
    Serial.println(myCommand);
    Serial.print("Increasing speed from ");
    Serial.print(mSpeed);
    mSpeed = mSpeed - 15;
    if (0>mSpeed) {
      mSpeed = 0;
    }
    analogWrite(speedPin, mSpeed);
    Serial.print(" to ");
    Serial.println(mSpeed);
  }


  if (IrReceiver.decodedIRData.decodedRawData == 0xBB44FF00) {
    myCommand = "Rewind";
    Serial.println(myCommand);
    digitalWrite(dir1, HIGH);
    digitalWrite(dir2, LOW);
    analogWrite(speedPin, mSpeed);
  }
  if (IrReceiver.decodedIRData.decodedRawData == 0xBC43FF00) {
    myCommand = "Fastforward";
    Serial.println(myCommand);
    digitalWrite(dir1, LOW);
    digitalWrite(dir2, HIGH);
    analogWrite(speedPin, mSpeed);
  }
}
