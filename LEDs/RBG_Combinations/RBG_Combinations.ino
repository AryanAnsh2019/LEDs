int mypins[3] = { 4, 21, 23}, i, j = 1000000;
void setup()
{
  for (i = 0; i < 3; i++)
  {
    pinMode(mypins[i], OUTPUT);
  }
}
void loop()
{
  for (i = 0; i <= 1; i = i + 1)
  {
    digitalWrite(mypins[i], HIGH);
    digitalWrite(mypins[i + 1], HIGH);
    delay(10000);
    digitalWrite(mypins[i], LOW);
    digitalWrite(mypins[i + 1], LOW);
    delay(100);
  }
  digitalWrite(4, HIGH);
  digitalWrite(23, HIGH);
  delay(10000);
  digitalWrite(4, LOW);
  digitalWrite(23, LOW);
  delay(100);
  digitalWrite(4, HIGH);
  digitalWrite(21, HIGH);
  digitalWrite(23, HIGH);
  delay(10000);
  for (i = 2; i > 0; i = i - 1)
  {
    digitalWrite(mypins[i], HIGH);
    digitalWrite(mypins[i - 1], HIGH);
    delay(10000);
    digitalWrite(mypins[i], LOW);
    digitalWrite(mypins[i - 1], LOW);
    delay(100);
  }
  digitalWrite(4, LOW);
  digitalWrite(21, LOW);
  digitalWrite(23, LOW);
  delay(100);
}
