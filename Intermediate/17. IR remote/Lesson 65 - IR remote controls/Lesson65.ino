#include<IRremote.h>
int IRpin = 3;
String myCommand;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  IrReceiver.begin(IRpin, ENABLE_LED_FEEDBACK);
  //  IR.Receiver.begin(IRpin, DISABLE_LED_FEEDBACK);

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

}
