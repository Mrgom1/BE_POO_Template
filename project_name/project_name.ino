#include "Application.h"

Application myApplication;

void setup() 
{
  // put your setup code here, to run once:
  myApplication.init();
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  myApplication.run();
  digitalWrite(LED_BUILTIN, HIGH);   // turn the  LED on by making the pin 13 HIGH
  delay(500);              // wait for a 0.5  second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the  pin 13 LOW
  delay(500);              // wait for a 0.5 second
}
