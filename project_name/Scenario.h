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
class Scenario:public Application
{
  public :
    /**
     * @fn Application();
     * @brief Constructeur par defaut
    */    
    Scenario();
    /**
     * @fn Application();
     * @brief Destructeur
    */    
    ~Scenario();    
    /**
     * @fn void init(void)
     * @brief Fonction d'initialisation de l'application
    */
    void wake_up(void);
    /**
     * @fn void run(void)
     * @brief Fonction de lancement de l'application
    */
    void go_to_bed(void);

    void day_time (void);

    void night_time (void);
};

#endif

