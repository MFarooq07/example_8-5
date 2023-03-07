#include "mbed.h"
#include "arm_book_lib.h"
#include "ldr_sensor.h"
#include "siren.h"
#include "smart_home_system.h"

AnalogIn eLDR(A2);
AnalogIn rLDR(A3);
AnalogIn gLDR(A4);
AnalogOut testLed(LED2);

static float threshold = 0.5;

static float eLDRvalue = eLDR.read();
static float rLDRvalue = rLDR.read();
static float gLDRvalue = gLDR.read();


void ldrSensorInit() { }
void ldrSensorUpdate() { }


void isDarkness()
{
    if ( eLDRvalue < threshold )
    {
        oPiezoState();
    }
}

bool isrRFID()
{
    if ( rLDRvalue > threshold )
    {
        return true;
    } else {
        return false;
    }
}

bool isgRFID()
{
    if ( gLDRvalue > threshold )
    {
        return true;
    } else {
        return false;
    }
}
