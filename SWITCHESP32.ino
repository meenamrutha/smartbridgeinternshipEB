void setup() 
{
  Serial.begin(115200);
  pinMode(23,INPUT);
  pinMode(2,OUTPUT);
 
}

void loop() 
{
 digitalRead(23);
if((digitalRead(23))==1)
{
digitalWrite(2,LOW);
delay(100);
Serial.println("LED IS LOW");

}
else
{
digitalWrite(2,HIGH);
delay(100);
Serial.println("LED IS HIGH");

}
}
