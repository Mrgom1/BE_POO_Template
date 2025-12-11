/*********************************************************************
 * @file  Apllication.cpp
 * @author <mettre l'adresse mail ou nom prenom>
 * @brief Fichier source de l'application
 *********************************************************************/
#include "Application.h"
#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include <Wire.h>
#include <rgb_lcd.h>


Application::Application()
{
  // Code
  ; 
}
  
Application::~Application()
{
  // Code
  ;
}  

void Application::init(void)
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(D5, OUTPUT); //BUZZER
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);

  Serial.begin(115200);
  Wire.begin(D2, D1);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.setRGB(255,0,0);

  // Connect to Wi-Fi
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    connect_screen = connect_screen + 1;
    lcd.print(".");
    if(connect_screen == 16){
      lcd.setCursor(0, 1);
    }
    if(connect_screen > 31){
      connect_screen = 0;
      lcd.clear();
      lcd.setRGB(255,0,0);
    }
    delay(500);
  }
  Serial.println("");

  lcd.clear();
  lcd.setRGB(0,255,0);
  lcd.print("WiFi connected");
  delay(500);

  Wire.begin();
  Serial.begin(115200);
  Serial.println("\nI2C Scanner");
}


void Application::run(void)
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the  LED on by making the pin 13 HIGH
  digitalWrite(D5, HIGH);
  delay(500);                        // wait for a 0.5  second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the  pin 13 LOW
  digitalWrite(D5, LOW);
  delay(500);                        // wait for a 0.5 second
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.setRGB(0,255,205);
  // print message
  lcd.print("Hello, World!");
  delay(1000);

  byte error, address;
  int nDevices;
  Serial.println("Scanning...");
  nDevices = 0;
  for(address = 1; address < 127; address++ ) {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();
    if (error == 0) {
      Serial.print("I2C device found at address 0x");
      if (address<16) {
        Serial.print("0");
      }
      Serial.println(address,HEX);
      nDevices++;
    }
    else if (error==4) {
      Serial.print("Unknow error at address 0x");
      if (address<16) {
        Serial.print("0");
      }
      Serial.println(address,HEX);
    }    
  }
  if (nDevices == 0) {
    Serial.println("No I2C devices found\n");
  }
  else {
    Serial.println("done\n");
  }

  lcd.setCursor(0,1);
  lcd.print("Hello, World!");
  delay(1000);
  lcd.clear();
}

