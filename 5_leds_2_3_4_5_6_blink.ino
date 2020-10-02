void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);

  for (int i=2; i<=6; i++) digitalWrite(i,HIGH);
}

void loop()
{
  int t=5000;
  for (int i=2; i<=6; i++)
  {
    digitalWrite(i,LOW);
    delay(t);
    digitalWrite(i,HIGH);
    delay(t);
  }
}
