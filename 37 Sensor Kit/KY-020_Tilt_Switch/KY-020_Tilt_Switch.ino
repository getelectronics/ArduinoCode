int Led = 13 ;// define LED Interface
int tiltpin = 2; // define the tilt switch pin
int val ;// define numeric variables val

void setup ()
{
  pinMode (Led, OUTPUT) ;// define LED as output interface
  pinMode (tiltpin, INPUT) ;//define the output interface tilt switch sensor
}

void loop ()
{
  val = digitalRead (tiltpin) ;// read the pin
  if (val == HIGH) //When the tilt sensor detects a signal when the switch, LED flashes 
  {
    digitalWrite (Led, HIGH);
  }
  else
  {
    digitalWrite (Led, LOW);
  }
}
