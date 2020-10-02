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
  randomSeed (analogRead(0));
  int t;
  for (int i=2; i<=6; i++)
  {
    t=random(10,300);
    digitalWrite(i,LOW);
    delay(t);
    digitalWrite(i,HIGH);
    delay(t);
  }
}
