int ledPin = 11;    // pin to control KY-034

void setup() 
{                
  pinMode(ledPin, OUTPUT);    // define pin as output
}

void loop() 
{
  digitalWrite(ledPin, HIGH); // turn LED on
  delay(3000);                // wait for 3 seconds
  digitalWrite(ledPin, LOW);  // turn LED off
  delay(1000);                // wait for a second
}
