// Lesson 48: Connecting and using an LCD display
#include<LiquidCrystal.h>
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
int i;
// Instantiating the LCD object
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
}

void loop() {
//  Ex 1:
//  lcd.setCursor(0,0);
//  lcd.print("MK2 booting up!");
//  delay(2000);
//  lcd.clear();
//
//  lcd.setCursor(0,0);
//  lcd.print("Checking vitals");
//  delay(2000);
//  lcd.setCursor(0,1);
//  lcd.print("Gathering data");
//  delay(2000);
//  lcd.clear();
//
//  lcd.setCursor(0,0);
//  lcd.print("All set chief!");
//  delay(2000);
//  lcd.setCursor(0,1);
//  lcd.print("Ready to win AutoNav");
//  delay(2000);
//  lcd.clear();

// Ex: 2 - Counting till 10
lcd.setCursor(0,0);
lcd.print("Watch me count");
delay(1000);
lcd.setCursor(0,1);
for(i=0;i<=10;i++){
  lcd.setCursor(i,1);
  lcd.print(i);
  delay(500);
}
lcd.clear();
i=0;  
}
