/*********************************************************************
 * @file  Scenario.h
 * @author DEVALET Hugo, BREIL Nicolas
 * @brief Fichier header de l'application
 *********************************************************************/
#ifndef SENSOR_H_
#define SENSOR_H_
#include "../Component.h"
/**
  * @class Application
  * @brief Classe Application 
*/    
class Sensor : public Component {
public:
    // Constructeur : appelle celui de Component
    Sensor(int pin, std::string nom);

    // Destructeur virtuel
    virtual ~Sensor();
    virtual float get_valeur() = 0;
};

#endif


