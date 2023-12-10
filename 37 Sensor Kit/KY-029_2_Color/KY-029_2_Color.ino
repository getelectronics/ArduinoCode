int redLED = 11;
int greenLED = 10;
 
void setup ()
{
  // Initialize output pins for the LEDs
  pinMode (redLED, OUTPUT); 
  pinMode (greenLED, OUTPUT); 
}
 
void loop ()
{
  digitalWrite (redLED, HIGH); // LED is switched on
  digitalWrite (greenLED, LOW); // LED is switched off
  delay (2000);
 
  digitalWrite (redLED, LOW); // LED is switched off
  digitalWrite (greenLED, HIGH); // LED is switched on
  delay (2000);
}
