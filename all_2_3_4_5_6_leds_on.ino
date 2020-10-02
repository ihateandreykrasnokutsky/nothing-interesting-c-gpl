void setup()
{
  for(int i=2;i<=6;i++)
  {
    pinMode(i,OUTPUT);
    digitalWrite(i,HIGH);
  }
}

void loop()
{
  for (int i=2;i<=6;i++)
  digitalWrite(i,LOW);
  delay(1000);
}
//not all leds are lighting, may be bacause arduino doesn't have enough power
