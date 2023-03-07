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

static bool rLdrState = OFF;  // Delvin
static bool gLdrState = OFF;  // Delvin


void ldrSensorInit() { }
void ldrSensorUpdate() { }

void rLdrStateRead(){         //Delvin
    return rLdrState;         //Delvin 
}

void gLdrStateRead(){     //Delvin
    return gLdrState;
}

void isDarkness()
{
    if ( eLDRvalue < threshold )
    {
        entrywayLEDon();  //in entryway
    } else {
        entrywayLEDoff();  //in entryway
    }
}

bool isrRFID()
{
    if ( rLDRvalue > threshold )
    {
        oPiezoState();
        rLdrState = ON;  //Delvin
    }
}

bool isgRFID()
{
    if ( gLDRvalue > threshold )
    {
        openDoor(); //this will be in servo module
        toGreenRGBLED(); //turn rgb to green for 10s (10,000)
        gLdrState = ON;   //Delvin
    }
}
