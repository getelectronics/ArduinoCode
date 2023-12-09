int sensorPin = A1; // Declare the input pin here
 
void setup()
{
    Serial.begin(9600);
}
 
void loop()
{      
    // Current voltage value is measured...
    int rawValue = analogRead(sensorPin);
    float voltage = rawValue * (5.0/1023) * 1000;
    float resitance = 10000 * ( voltage / ( 5000.0 - voltage) );
    
    Serial.print("Voltage value:"); 
    Serial.print(voltage); 
    Serial.print(" mV");
    Serial.println("");
    Serial.print("resistance value:"); 
    Serial.print(resitance); 
    Serial.print(" Ohms");
    Serial.println("");
    Serial.println("---------------------------------------");
 
    delay(500);
}
