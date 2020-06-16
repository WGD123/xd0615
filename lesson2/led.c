int i=0;
void setup()
{
  for(i=0;i<8;i++)
  {
    pinMode(i, OUTPUT);
  }
  
}

void loop()
{
  for(i=1;i<8;i++)
  {
    digitalWrite(i-1, HIGH);
    digitalWrite(i, HIGH);
    delay(500); // Wait for 1000 millisecond(s)
    digitalWrite(i-1, LOW);
    digitalWrite(i, LOW);
    delay(500); // Wait for 1000 millisecond(s)
  }
}