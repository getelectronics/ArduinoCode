int shockPin = 10; // sensor connected to pin 10
int shockVal = HIGH;
boolean bAlarm = false;
unsigned long lastShockTime;
int shockAlarmTime = 250; // Number of milli seconds to keep the shock alarm high

void setup ()
{
  Serial.begin(9600);  
  pinMode (shockPin, INPUT)
}

void loop ()
{
  shockVal = digitalRead (shockPin) ; // read the value from the sensor
  
  if (shockVal == LOW)
  {
    lastShockTime = millis();
    if (!bAlarm)
    {
      Serial.println("Shock detected");
      bAlarm = true;
    }
  }
  else
  {
    if( (millis()-lastShockTime) > shockAlarmTime  &&  bAlarm)
    {
      Serial.println("No Shock detected");
      bAlarm = false;
    }
  }
}
