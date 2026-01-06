/*********************************************************************
 * @file  Ultrasonic_Sensor.h
 * @brief 
 *********************************************************************/

#include <Ultrasonic.h>
#include "Sensor.h"



class UltrasonicSensor : public Sensor{

private:
    Ultrasonic ultrasonic;

public:
    UltrasonicSensor(uint8_t pin, const char* name);
    ~UltrasonicSensor();

    float get_valeur() override;
};