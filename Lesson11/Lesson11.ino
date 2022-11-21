// Lesson 11: Printing from an Arduino
int j=1;
int delay_time=1000;
String myString = "j = ";
int x=3;
int y=7;
int z;
String mystring2 = " + ";
float pi = 3.14;
float r = 2;
float area;



void setup() {
//  Serial.begin(9600); // 1 to 3
  Serial.begin(115200);
}

void loop() {
//  // 1. Counter print in the same line
//  Serial.print(j);
//  j=j+1;
//  delay(delay_time);

//  // 2. Counter print in the next line
//  Serial.println(j);
//  j=j+1;
//  delay(delay_time);

//  // 3. Printing with a string and integer
//  Serial.print(myString);
//  Serial.println(j);
//  j=j+1;
//  delay(delay_time);

//  // 4. Using a different baud rate
//  Serial.print(myString);
//  Serial.println(j);
//  j=j+1;
//  delay(delay_time);
//  // Note that the baud rate set in the code must be the same as the baud rate set in the serial monitor

//// 5. Printind addedd integers and strings 2 ways
//  z = x+y;
//  Serial.print(x);
//  Serial.print(mystring2);
//  Serial.print(y);
//  Serial.print(" = ");
//  Serial.println(z);
//  delay(delay_time);

//// 6. Finding area of a circle using floats
//  area =  pi*r*r;
//  Serial.print("Area of the circle with radius 2 is ");
//  Serial.print(area); 
//  Serial.println(" m^2");
//  delay(delay_time);

//// 7. Dynamically changing radius
//  area =  pi*r*r;
//  Serial.print("Area of the circle with radius of ");
//  Serial.print(r);
//  Serial.print("m is ");
//  Serial.print(area); 
//  Serial.println(" m^2");
//  delay(delay_time);
//  r = r + 0.5;

}
