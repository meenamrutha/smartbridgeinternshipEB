void setup() 
{

  Serial.begin(115200);
  pinMode(4,INPUT);
  pinMode(2,OUTPUT);
}

void loop()
{
  digitalRead(4);
  if(digitalRead(4)==1)
  {
    digitalWrite(2,HIGH);
    Serial.println("person is identified");
  }
  else
  {
    digitalWrite(2,LOW);
    Serial.println("waiting for person");
  }

}
