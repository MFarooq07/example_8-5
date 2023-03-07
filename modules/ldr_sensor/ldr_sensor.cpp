#include "mbed.h"
#include "arm_book_lib.h"
#include "ldr_sensor.h"
#include "siren.h"
#include "smart_home_system.h"

AnalogIn eLDR(A2);
AnalogIn rLDR(A3);
AnalogIn gLDR(A4);

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
        entrywayLED();
    }
}

bool isrRFID()
{
    if ( rLDRvalue > threshold )
    {
        oPiezoState();
    }
}

bool isgRFID()
{
    if ( gLDRvalue > threshold )
    {
        openDoor();
    }
}
