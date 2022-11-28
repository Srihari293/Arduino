// Lesson 49: Making a calculator with an LCD display
#include<LiquidCrystal.h>
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
float firstNum;
float secondNum;
float answer;
String op;

// Instantiating the LCD object
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Enter Num 1");
  while(Serial.available()==0){}
  firstNum=Serial.parseFloat();
  delay(1000);

  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Enter Num 2");
  while(Serial.available()==0){}
  secondNum=Serial.parseFloat();
  delay(1000);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Enter Num Op");
  while(Serial.available()==0){}
  op=Serial.readString();
  delay(1000);

  if(op == "+"){
    answer = firstNum+secondNum;
  }

  if(op == "-"){
    answer = firstNum-secondNum;
  }

  if(op == "*"){
    answer = firstNum*secondNum;
  }

  if(op == "/"){
    answer = firstNum/secondNum;
  }
  
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print(firstNum);
  lcd.print(op);
  lcd.print(secondNum);
  lcd.print("=");
  lcd.print(answer);
  delay(4000);
  lcd.clear();
}
