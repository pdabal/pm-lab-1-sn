#include <Arduino.h>

#define Led_Red  10

#define M_KROPKA_T 200
#define M_KRESKA_T 3 *M_KROPKA_T
#define M_PAUZA_T 3 * M_KROPKA_T
#define M_SpACJA_T 7 * M_KROPKA_T

void setup() 
{
pinMode(Led_Red,OUTPUT);
}

void loop() 
{
  for (int i = 0; i<3; i++)
  {
digitalWrite(Led_Red,HIGH);
delay(M_KROPKA_T);
digitalWrite(Led_Red,LOW);
delay(M_PAUZA_T);
  }
  for (int i=0;i<3;i++)
  {
    digitalWrite(Led_Red,HIGH);
delay(M_KRESKA_T);
digitalWrite(Led_Red,LOW);
delay(M_PAUZA_T);
}
for (int i=0;i<3;i++)
{
digitalWrite(Led_Red,HIGH);
delay(M_KROPKA_T);
digitalWrite(Led_Red,LOW);
delay(M_PAUZA_T);
}
delay(M_PAUZA_T);
}
