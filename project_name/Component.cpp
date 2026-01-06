/*********************************************************************
 * @file  Scenario.cpp
 * @author <mettre l'adresse mail ou nom prenom>
 * @brief Fichier source de l'application
 *********************************************************************/
#include "Component.h"

class Component{
  protected:
    int pin;
    string name;
public:
    Component(int p, string n) : pin(p), name(n) {}
    virtual void init() = 0; // Méthode pure
    virtual ~Component() {}  // Destructeur virtuel essentiel

    string get_name (){return(name);}
    int get_pin(){return pin;}

};
