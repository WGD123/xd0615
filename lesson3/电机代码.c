char ch=' ';
void setup()
{
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.print("ok");
}

void loop()
{
  if(Serial.available()>0) {
  ch=Serial.read();
  switch(ch)
  {
    case'1':
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(0,LOW);
      break;
    case'2':
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(8,LOW);
      break;
  }
  }
}
