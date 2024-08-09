//Master Code
#include <Wire.h> //i2c library
int pushbutton=A0;
void setup()
{
  Wire.begin();
  pinMode(pushbutton,INPUT_PULLUP);
}
int x = 0;
void loop()
{
  Wire.beginTransmission(8); 
  x=digitalRead(pushbutton);
   Wire.write(x);                
  Wire.endTransmission();   
  delay(500);
}
