/*********************************************************************
 * @file  Ultrasonic_Sensor.h
 * @brief 
 *********************************************************************/

#include <Ultrasonic.h>
#include "Sensor.h"

class TouchSensor : public Sensor{
public:
    TouchSensor(uint8_t pin, const char* name);
    ~TouchSensor();

    float read() override;
};