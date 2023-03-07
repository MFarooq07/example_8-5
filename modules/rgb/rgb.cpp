#include "arm_book_lib.h"



DigitalOut RGBLed[] = {(PB_4), (PA_0), (PD_12)};



void toGreenRGBLED()
{
    setPeriod( RGB_LED_RED, 0 );
    setPeriod( RGB_LED_GREEN, 1 );
    setPeriod( RGB_LED_BLUE, 0 );

    setDutyCycle( RGB_LED_RED, 0 );
    setDutyCycle( RGB_LED_GREEN, 1 );
    setDutyCycle( RGB_LED_BLUE, 0 );
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
