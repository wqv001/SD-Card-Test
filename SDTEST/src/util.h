#ifndef __UTIL_H
#define __UTIL_H
#include "datatypes.h"
#include <LiquidCrystal_I2C.h>


//keypresses
unsigned char get_key();

//file utils
unsigned char chk_ext(char* fname);


#endif