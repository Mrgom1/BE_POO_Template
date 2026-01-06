/*********************************************************************
 * @file  Scenario.h
 * @author DEVALET Hugo, BREIL Nicolas
 * @brief Fichier header de l'application
 *********************************************************************/
#ifndef SCENARIO_H_
#define SCENARIO_H_
/**
  * @class Application
  * @brief Classe Application 
*/    
class Motor:public Actuator
{
  public :
    /**
     * @fn Application();
     * @brief Constructeur par defaut
    */    
    Motor();
    /**
     * @fn Application();
     * @brief Destructeur
    */    
    ~Motor();    
    /**
     * @fn void init(void)
     * @brief Fonction d'initialisation de l'application
    */
    void init(void);
    /**
     * @fn void run(void)
     * @brief Fonction de lancement de l'application
    */
    void open_door(void);

    void close_door (void);
};

#endif

