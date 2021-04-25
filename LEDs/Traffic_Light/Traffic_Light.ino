void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(21, OUTPUT);
}
void loop()
{
  int i = 1, j = 1;
  if (i <= 8)
  {
    digitalWrite(2, HIGH);
    delay(10000);
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    delay(1000);
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    delay(1000);
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    delay(1000);
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    delay(1000);
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    delay(5000);
    digitalWrite(21, HIGH);
    delay(10000);
    digitalWrite(21, LOW);
    i++;
  }
}
