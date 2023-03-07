#include "mbed.h"
#include "arm_book_lib.h"
#include "ldr_sensor.h"
#include "siren.h"
#include "smart_home_system.h"


DigitalInOut oPiezo(PC_8);
DigitalInOut iPiezo(PC_9);


static int currentoPiezoTime = 0;
static int currentiPiezoTime = 0;



void sirenInit()
{
    oPiezo.mode(OpenDrain);
    oPiezo.input();
    iPiezo.mode(OpenDrain);
    iPiezo.input();
}


void oPiezoState()
{
    if ( isrRFID )
    {
        oPiezo.output();
        oPiezo = LOW;
        delay(100);
        oPiezo.imput();
    } else {
        oPiezo.input();
    }
}


void iPiezoState()
{
    if( iAlarm )
    {
        iPiezo.output();
        iPiezo = LOW;
        delay(100);
        iPiezo.imput();
    } else {
        iPiezo.input();
    }
}
