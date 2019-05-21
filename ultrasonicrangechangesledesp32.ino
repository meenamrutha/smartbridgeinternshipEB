const int trigPin = 4;
const int echoPin = 5;
long duration;
int distance;


void setup() {
pinMode(2,OUTPUT);
pinMode(23,OUTPUT);
pinMode(22,OUTPUT);
pinMode(27,OUTPUT);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
Serial.begin(115200);
}

void loop() {
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(1000);
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance=duration*0.034/2;
Serial.print("Distance : ");
Serial.println(distance);
if(distance==7)
{
  digitalWrite(2,HIGH);
}
if(distance==10) 
{
  digitalWrite(23,HIGH);
}
if(distance==13)
{
  digitalWrite(22,HIGH);
}
4if(distance==20);
{
  digitalWrite(27,HIGH);
}
}
