#include <Arduino.h>
#include <SoftwareUART.h>

SoftwareUART TempSerial(21, 22);

void setup() 
{
    // put your setup code here, to run once:
    TempSerial.begin(9600);
}

void loop() 
{
    // put your main code here, to run repeatedly:
    if(TempSerial.available())
    {
        TempSerial.write(TempSerial.read());
    }
}