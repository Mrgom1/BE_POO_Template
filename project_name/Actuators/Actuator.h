/*********************************************************************
 * @file  Scenario.h
 * @author DEVALET Hugo, BREIL Nicolas
 * @brief Fichier header de l'application
 *********************************************************************/
#ifndef ACTUATOR_H_
#define ACTUATOR_H_

#include "../Component.h"
using namespace std;

/**
  * @class Application
  * @brief Classe Application 
*/    
class Actuator:public Component
{
  public :
    /**
     * @fn Application();
     * @brief Constructeur par defaut
    */    
    Actuator(int pin, string name);
    /**
     * @fn Application();
     * @brief Destructeur
    */    
    virtual ~Actuator(); 
    virtual void set_value(float value )  = 0;

};

#endif

