#include "datatypes.h"
#include "data.h"
#include "util.h"
#include "constants.h"
#include "lcd.h"
#include <Arduino.h>
#include <SdFat.h>


unsigned char get_key()
{
#ifndef DEBUG
 if (!digitalRead(BTN_UP)) return btnUP;
 if (!digitalRead(BTN_DN)) return btnDOWN;
 if (!digitalRead(BTN_OK)) return btnSELECT;
 return btnNONE;
#else
 int adc_key_in = analogRead(0);
 if (adc_key_in > 1000) return btnNONE;
 if (adc_key_in < 50)   return btnRIGHT; 
 if (adc_key_in < 195)  return btnUP;
 if (adc_key_in < 380)  return btnDOWN;
 if (adc_key_in < 555)  return btnLEFT;
 if (adc_key_in < 790)  return btnSELECT;  
 return btnNONE;
#endif
}
