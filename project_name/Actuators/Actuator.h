/*********************************************************************
 * @file  Scenario.h
 * @author DEVALET Hugo, BREIL Nicolas
 * @brief Fichier header de l'application
 *********************************************************************/
#ifndef ACTUATOR_H_
#define ACTUATOR_H_
/**
  * @class Application
  * @brief Classe Application 
*/    
class Actuator:public Scenario
{
  public :
    /**
     * @fn Application();
     * @brief Constructeur par defaut
    */    
    Actuator();
    /**
     * @fn Application();
     * @brief Destructeur
    */    
    ~Actuator();    
    /**
     * @fn void init(void)
     * @brief Fonction d'initialisation de l'application
    */
    void Activate(void);
    /**
     * @fn void run(void)
     * @brief Fonction de lancement de l'application
    */
};

#endif

