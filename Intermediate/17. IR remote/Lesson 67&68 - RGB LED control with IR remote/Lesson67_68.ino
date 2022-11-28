// Lesson 64: Understanding how we control an a project using an IR sensor
#include<IRremote.h>
int IRpin = 9;
String myCommand;

int rPin = 6;
int gPin = 10;
int bPin = 5;

int rBright = 255;
int gBright = 255;
int bBright = 255;

float dFact = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  IrReceiver.begin(IRpin, ENABLE_LED_FEEDBACK);
  //  IR.Receiver.begin(IRpin, DISABLE_LED_FEEDBACK);
  pinMode(rPin, OUTPUT);
  pinMode(bPin, OUTPUT);
  pinMode(gPin, OUTPUT);
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
  }
  if (IrReceiver.decodedIRData.decodedRawData == 0xB946FF00) {
    myCommand = "Volume+";
    Serial.println(myCommand);
  }
  if (IrReceiver.decodedIRData.decodedRawData == 0xB847FF00) {
    myCommand = "Stop/Function";
    Serial.println(myCommand);
  }


  if (IrReceiver.decodedIRData.decodedRawData == 0xBB44FF00) {
    myCommand = "Rewind";
    Serial.println(myCommand);
  }
  if (IrReceiver.decodedIRData.decodedRawData == 0xBF40FF00) {
    myCommand = "Play/Pause";
    Serial.println(myCommand);
  }
  if (IrReceiver.decodedIRData.decodedRawData == 0xBC43FF00) {
    myCommand = "Fastforward";
    Serial.println(myCommand);
  }


  if (IrReceiver.decodedIRData.decodedRawData == 0xF807FF00) {
    myCommand = "Channel down";
    Serial.println(myCommand);
  }
  if (IrReceiver.decodedIRData.decodedRawData == 0xEA15FF00) {
    myCommand = "Volume-";
    Serial.println(myCommand);
  }
  if (IrReceiver.decodedIRData.decodedRawData == 0xF609FF00) {
    myCommand = "Channel up";
    Serial.println(myCommand);
  }


  if (IrReceiver.decodedIRData.decodedRawData == 0xE916FF00) {
    myCommand = "Zero";
    Serial.println(myCommand);
  }
  if (IrReceiver.decodedIRData.decodedRawData == 0xE619FF00) {
    myCommand = "EQ";
    Serial.println(myCommand);
  }
  if (IrReceiver.decodedIRData.decodedRawData == 0xF20DFF00) {
    myCommand = "ST/REPT";
    Serial.println(myCommand);
  }
  if (IrReceiver.decodedIRData.decodedRawData == 0xF30CFF00) {
    myCommand = "One";
    Serial.println(myCommand);
  }
  if (IrReceiver.decodedIRData.decodedRawData == 0xE718FF00) {
    myCommand = "Two";
    Serial.println(myCommand);
  }
  if (IrReceiver.decodedIRData.decodedRawData == 0xA15EFF00) {
    myCommand = "Three";
    Serial.println(myCommand);
  }


  if (IrReceiver.decodedIRData.decodedRawData == 0xF708FF00) {
    myCommand = "Four";
    Serial.println(myCommand);
  }
  if (IrReceiver.decodedIRData.decodedRawData == 0xE31CFF00) {
    myCommand = "Five";
    Serial.println(myCommand);
  }
  if (IrReceiver.decodedIRData.decodedRawData == 0xA55AFF00) {
    myCommand = "Six";
    Serial.println(myCommand);
  }


  if (IrReceiver.decodedIRData.decodedRawData == 0xBD42FF00) {
    myCommand = "Seven";
    Serial.println(myCommand);
  }
  if (IrReceiver.decodedIRData.decodedRawData == 0xAD52FF00) {
    myCommand = "Eight";
    Serial.println(myCommand);
  }
  if (IrReceiver.decodedIRData.decodedRawData == 0xB54AFF00) {
    myCommand = "Nine";
    Serial.println(myCommand);
  }
  if (myCommand == "Power") {
    rBright = 255;
    gBright = 255;
    bBright = 255;
    dFact = 1;
  }

  if (myCommand == "Stop/Function") {
    rBright = 0;
    gBright = 0;
    bBright = 0;
    dFact = 0;
  }
  if (myCommand== "Zero") {
    rBright = 255;
    gBright = 255;
    bBright = 255;
  }
  if (myCommand== "One") {
    rBright = 255;
    gBright = 0;
    bBright = 0;
  }
  if (myCommand == "Two") {
    rBright = 0;
    gBright = 255;
    bBright = 0;
  }
  if (myCommand== "Three") {
    rBright = 0;
    gBright = 0;
    bBright = 255;
  }
  if (myCommand == "Four") {
    rBright = 0;
    gBright = 255;
    bBright = 255;
  }
  if (myCommand == "Five") {
    rBright = 255;
    gBright = 0;
    bBright = 150;
  }
  if (myCommand == "Six") {
    rBright = 255;
    gBright = 255;
    bBright = 0;
  }
  if (myCommand == "Volume-") {
    dFact = dFact * .75;
  }
  if (myCommand == "Volume+") {
    dFact = dFact * 1.3;
    if (dFact > 1) {
      dFact = 1;
    }
  }

  analogWrite(rPin, rBright * dFact);
  analogWrite(gPin, gBright * dFact);
  analogWrite(bPin, bBright * dFact);
}
