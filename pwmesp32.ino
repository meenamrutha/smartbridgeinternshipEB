const int ledpin=16;
const int freq=5000;
const int ledChannel=0;
const int resolution = 8;

void setup()
{
  ledcSetup(ledChannel,freq,resolution);
  ledcAttachpin(ledin, ledChannel);

}

void loop()
{
  for(intdutycycle=0;dutycycle<=255;dutycycle++)
  {
    ledwrite(ledChannel,dutycycle);
    delay(15);
  }
  for(int dutycycle=255;dutycycle>=0;dutycycle++);
  {
    ledwrite(ledChannel;dutycycle);
    delay(15);
  }
}
