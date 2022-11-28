// Lesson 57: Plotting the sin and cosine waves simulatenously on the Serial plotter
float sinVal;
float cosVal;
float j;
float pi = 3.13159265;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(j=0; j<=2*pi; j=j+0.01){
    sinVal = sin(j);
    cosVal = cos(j);
    Serial.print(sinVal);
    Serial.print(",");
    Serial.println(cosVal);
  }
}
