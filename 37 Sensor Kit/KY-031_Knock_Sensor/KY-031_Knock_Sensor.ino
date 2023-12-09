int LedPin = 13 ;// define LED Interface
int ShockPin = 2; // define the percussion Sensor Interface
int val ;// define numeric variables val

void setup ()
{
  pinMode (LedPin, OUTPUT) ;// define LED as output interface
  pinMode (ShockPin, INPUT) ;// define knock sensor output interface
}

void loop ()
{
  val = digitalRead (ShockPin) ;// read ShockPin
  if (val == HIGH) // When the knock switch is triggered the LED flashes
  {
    digitalWrite (LedPin, LOW);
  }
  else
  {
    digitalWrite (LedPin, HIGH);
  }
}

