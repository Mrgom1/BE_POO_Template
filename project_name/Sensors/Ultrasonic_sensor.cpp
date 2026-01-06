/*********************************************************************
 * @file  Ultrasonic_sensor
 * @author <mettre l'adresse mail ou nom prenom>
 * @brief Fichier source de l'application
 *********************************************************************/
#include "Ultrasonic_sensor.h"

UltrasonicSensor::UltrasonicSensor(uint8_t pin, const char* name)
    : Sensor(pin, name), ultrasonic(pin){
}

UltrasonicSensor::~UltrasonicSensor(){
}

float UltrasonicSensor::read(){
    long distance = ultrasonic.MeasureInCentimeters();

    if (distance <= 0)
        return -1.0f;

    return static_cast<float>(distance);
}


