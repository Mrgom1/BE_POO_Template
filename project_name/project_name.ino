#include "Application.h"
#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>

Application myApplication;

const char* ssid = "iPhone de Hugo";
const char* password = "hugodevalet";

//WiFiClientSecure client;

void setup() 
{
  // put your setup code here, to run once:
  myApplication.init();
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(D1, OUTPUT); //BUZZER

  Serial.begin(115200);

  // Connect to Wi-Fi
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");
    }
    Serial.println("");
    Serial.println("WiFi connected");
}

void loop() 
{
  // put your main code here, to run repeatedly:
  myApplication.run();
  digitalWrite(LED_BUILTIN, HIGH);   // turn the  LED on by making the pin 13 HIGH
  digitalWrite(D1, HIGH);
  delay(500);              // wait for a 0.5  second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the  pin 13 LOW
  digitalWrite(D1, LOW);
  delay(500);              // wait for a 0.5 second
}
