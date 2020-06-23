#include <MsTimer2.h>
int pinInterrupt=2;
int tick = 0; //计数值
void onTimer()
{
    tick++;
    if(tick>9)
    {
      tick=0;
    }
  }
void myfunc()
{
    tick=0;
    
  }
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600); //初始化串口
  MsTimer2::set(1000, onTimer);
  MsTimer2::start();
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), myfunc, CHANGE);
}
  
  

 byte income=0;
void loop()
{
    income=tick;
    income=income-'0';
    
    digitalWrite(3,income&0x1);
    digitalWrite(4,(income>>1)&0x1);
    digitalWrite(5,(income>>2)&0x1);
    digitalWrite(6,(income>>3)&0x1);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
}