void setup()
{
  pinMode(2, OUTPUT);
  pinMode(23, OUTPUT);
}
void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(23, LOW);
  delay(100);
  digitalWrite(2, LOW);
  digitalWrite(23, HIGH);
  delay(100);
}
