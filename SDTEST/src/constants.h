/*
 * constants.h
 * Contains defined constants, user-modifiable macros, and structures
 * Read the manual to see what to modify
 */
 
 #include <Arduino.h>
#ifndef __CONSTANTS_H

//#define DEBUG

/****Coil-dependent configuration variables: change these to match your coil****/

//multiply the pulsewidths by this constant, good for quick 'n dirty scaling
#define LOOKUP_TABLE_SCALE 3

//minimum on-time, in microseconds
#define MIN_ON_TIME 10

//on-times in microseconds, don't forget to multiply by LOOKUP_TABLE_SCALE!
#define ON_TIME_ARRAY_LENGTH 26
static byte on_times[] = 
{33, 33, 33, 33, 27, 23, 20, 20, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 8, 8, 8, 8, 8, 8, 8};

/****End coil config variables****/

/****Instrument-dependent configuration variables: change to match your MIDI device****/

//sustain time, in microseconds
#define SUSTAIN_TIME 750000
#define SUSTAIN_TIME_OVER_256 2930

//lets us change the way velocity mapping works (linear, LUT, something else...)
#define map_velocity(v) (127 + v / 2)

//map the sustain time as well
#define map_sustain(t) ((long) (t) / SUSTAIN_TIME_OVER_256)
/****End instrument config variables****/

/****System stuff****/
#define FILE_BUFFER_SIZE 256

#define MMC_CS 10

#ifdef DEBUG
  #define RS 8
  #define EN 9
  #define D4 4
  #define D5 5
  #define D6 6
  #define D7 7
#else
  #define BTN_UP A0
  #define BTN_OK A2
  #define BTN_DN A3
  #define RS 4
  #define EN 5
  #define D4 6
  #define D5 7
  #define D6 8
  #define D7 9
#endif

#define btnRIGHT  0
#define btnUP     1
#define btnDOWN   2
#define btnLEFT   3
#define btnSELECT 4
#define btnNONE   5

#define MENU_SDCARD 0
#define MENU_FIXED  2
#define MENU_LIVE   1

#define __CONSTANTS_H
#endif