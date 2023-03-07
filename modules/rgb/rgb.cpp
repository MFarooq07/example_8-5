void toGreenRGBLED()
{
}

void toRedRGBLED()
{
    setPeriod( RGB_LED_RED, 1 );
    setPeriod( RGB_LED_GREEN, 0 );
    setPeriod( RGB_LED_BLUE, 0 );

    setDutyCycle( RGB_LED_RED, 1 );
    setDutyCycle( RGB_LED_GREEN, 0 );
    setDutyCycle( RGB_LED_BLUE, 0 );
}



#include "arm_book_lib.h"



#define LEDS_QUANTITY 3

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

DigitalOut RGBLed[] = {(PB_4), (PA_0), (PD_12)};



static void setPeriod( lightSystem_t light, float period );

//=====[Implementations of public functions]===================================

void brightControlInit()
{
    tickerBrightControl.attach( tickerCallbackBrightControl, 
                              ( (float) tickRateMSBrightControl) / 1000.0 );

    setPeriod( RGB_LED_RED, 0.01f );
    setPeriod( RGB_LED_GREEN, 0.01f );
    setPeriod( RGB_LED_BLUE, 0.01f );

    setDutyCycle( RGB_LED_RED, 0.5f );
    setDutyCycle( RGB_LED_GREEN, 0.5f );
    setDutyCycle( RGB_LED_BLUE, 0.5f );
}

