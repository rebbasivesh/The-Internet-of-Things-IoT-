//Slave Code
#include <Wire.h>
int led=6;
void setup()
{
  Wire.begin(8);                
  Wire.onReceive(receiveEvent); 
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop()
{
  delay(100);
}


void receiveEvent(int howMany)
{
  int x = Wire.read();    
  Serial.println(x); 
 if (x==0)
 {
   digitalWrite(led,HIGH);
 }
 else
 {
   digitalWrite(led,LOW);
 }
 
  
}