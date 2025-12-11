#include "Application.h"
#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include <Wire.h>
#include <rgb_lcd.h>

Application myApplication;

const char* ssid = "iPhone de Hugo";
const char* password = "hugodevalet";

// set the LCD number of columns and rows
int lcdColumns = 16;
int lcdRows = 2;
int connect_screen =0;

// set LCD address, number of columns and rows
// if you don't know your display address, run an I2C scanner sketch
rgb_lcd lcd;

//WiFiClientSecure client;

void setup() 
{
  // put your setup code here, to run once:
  myApplication.init();
}

void loop() 
{
  // put your main code here, to run repeatedly:
  myApplication.run();

}
