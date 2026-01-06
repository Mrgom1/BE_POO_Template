/*********************************************************************
 * @file  Scenario.cpp
 * @author <mettre l'adresse mail ou nom prenom>
 * @brief Fichier source de l'application
 *********************************************************************/
#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>
using namespace std;
// L'include Arduino.h est nécessaire pour les types spécifiques (uint8_t) 
// et les constantes si vous en utilisez ici, mais pour int et string c'est optionnel.
// #include <Arduino.h> 

class Component {
protected:
    // "protected" permet aux classes filles (Sensor, Actuator) d'accéder directement à ces variables
    int pin;            // Le numéro de la broche sur l'ESP8266
    std::string name;    // Un nom pour identifier le composant (ex: "Bouton_Rouge")

public:
    // Constructeur
    Component(int pin, string name);

    // Destructeur Virtuel
    // OBLIGATOIRE quand on utilise le polymorphisme (std::vector<Component*>)
    // Sinon le destructeur des classes filles ne sera pas appelé (fuite de mémoire).
    virtual ~Component();

    // Méthode Virtuelle Pure
    // Le "= 0" rend la classe Abstraite. 
    // Chaque enfant (Led, Bouton, LCD) DEVRA fournir sa propre version de init().
    virtual void init() = 0; 

    // Getters (Accesseurs) pour lire les infos protégées
    int get_pin() const;
    string get_name() const;
};

#endif
