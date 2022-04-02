/**
  Blink

  Turns on a LED on for one second, then off for one second, repeatedly.
  As on Wemos Lolin32 Lite, the built-in pin is connected to Vcc, the LED turns on with voltage LOW.
  
 */
#include "Arduino.h"

// run once 
void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// run repeatedly
void loop()
{
  // turn the LED on by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);

  // wait for a second      
  delay(1000);
  
  // turn the LED off (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);

   // wait for a second
  delay(1000);
  }