/*********************************************************************
 * @file  TouchSensor.cpp
 * @author <mettre l'adresse mail ou nom prenom>
 * @brief Fichier source de l'application
 *********************************************************************/
#include "TouchSensor.h"
#include <Arduino.h>

TouchSensor::TouchSensor(uint8_t pin, const char* name)
    : Sensor(pin, name){
}

TouchSensor::~TouchSensor(){
}

float TouchSensor::read(){
    int value = digitalRead(pin);
    return (value==HIGH);
}