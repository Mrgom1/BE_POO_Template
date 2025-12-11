
#ifndef WIFI_H
#define WIFI_H

#include <ESP8266WiFi.h>

class Wifi
{
private:
    const char* ssid;
    const char* password;

public:
    /**
     * @brief Constructeur
     */
    Wifi(const char* ssid, const char* password);

    /**
     * @brief Destructeur
     */
    ~Wifi();

    /**
     * @brief Initialise et connecte le WiFi
     */
    void init();

    /**
     * @brief Tente de (re)connecter si déconnecté
     */
    void ensureConnected();

    /**
     * @brief Déconnecte proprement
     */
    void disconnect();

    /**
     * @brief Retourne l'adresse IP au format String
     */
    String getIP();

    /**
     * @brief Vérifie si le WiFi est connecté
     */
    bool isConnected();

    /**
     * @brief Envoie des données via HTTP GET (simple)
     */
    bool httpGET(const char* url);

    /**
     * @brief Envoie des données via HTTP POST (simple)
     */
    bool httpPOST(const char* url, const String& data);
};

#endif