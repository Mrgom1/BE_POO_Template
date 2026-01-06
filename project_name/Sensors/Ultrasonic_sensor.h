/*********************************************************************
 * @file  UltrasonicSensor.h
 * @brief 
 *********************************************************************/

#include <Ultrasonic.h>

class UltrasonicSensor : public Sensor{
    
private:
    Ultrasonic ultrasonic;

public:
    UltrasonicSensor(uint8_t pin, const char* name);
    ~UltrasonicSensor();

    float read() override;
};