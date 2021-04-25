int mypins[8] = {2, 4, 5, 18, 19, 21, 22, 23}, i;
void setup()
{
  //7 reds,6 greens,5 blues,5 whites
  Serial.begin(9600);
  for (i = 0; i < 8; i++)
  {
    pinMode(mypins[i], OUTPUT);
  }
}
void loop()
{
  for (i = 0; i < 7; i++)
  {
    Serial.print(i);
    digitalWrite(mypins[i], HIGH);
    delay(100);
    digitalWrite(mypins[i], LOW);
    delay(10);
  }
  for (i = 7; i >= 1; i--)
  {
    Serial.print(i);
    digitalWrite(mypins[i], HIGH);
    delay(100);
    digitalWrite(mypins[i], LOW);
    delay(10);
  }
}
