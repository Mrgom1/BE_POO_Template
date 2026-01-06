
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

};

#endif