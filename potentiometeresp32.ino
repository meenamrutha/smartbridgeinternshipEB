void setup()
{
Serial.begin(115200);
pinMode(2,OUTPUT);
pinMode(5,INPUT);

}

void loop()
{
  analogRead(5);
  if((analogRead(5))>100)
  {
  analogWrite(2,5)
  Serial.println(analogRead(5));
  dalay(100);
  }
 

}
