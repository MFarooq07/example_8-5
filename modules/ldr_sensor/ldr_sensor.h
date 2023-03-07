//=====[#include guards - begin]===============================================

#ifndef _LDR_SENSOR_H_
#define _LDR_SENSOR_H_

//=====[Declaration of public defines]=========================================

//=====[Declaration of public data types]======================================

//=====[Declarations (prototypes) of public functions]=========================

void ldrSensorInit();
void ldrSensorUpdate();

bool isDarkness();
bool isrRFID();
bool isgRFID();

//=====[#include guards - end]=================================================

#endif // _LDR_SENSOR_H_
