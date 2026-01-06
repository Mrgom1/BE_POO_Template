/*********************************************************************
 * @file  Scenario.cpp
 * @author <mettre l'adresse mail ou nom prenom>
 * @brief Fichier source de l'application
 *********************************************************************/
#include "../Component.h"
#include "Sensor.h"
#include <string>
#include <iostream>
using namespace std;

Sensor::Sensor(int pin, string name) : Component(pin,name){}
Sensor::~Sensor(){}

