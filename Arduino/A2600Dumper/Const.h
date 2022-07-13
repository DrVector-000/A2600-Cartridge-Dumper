/*  
  A2600Dumper.ino - Atari 2600 Cartridge Dumper
  Copyright (C) 2022 DrVector
  
  Dichiarazione costanti
*/

#include <Arduino.h>

//******************************************************************************************************************//
//* Pins pilota Shift Register 74HC595
//******************************************************************************************************************//
// Pin SRCLK del SN74HC595
// Shift Register Clock - INPUT
const int SN_SRCLK_PIN = 12;
// Pin SER del SN74HC595
// Serial Data In - INPUT
const int SN_SER_PIN = 10;
// Pin RCLK del SN74HC595
// Storage Register Clock - INPUT
const int SN_RCLK_PIN = 11;

const int dataPins[] = 
{
    4, 3, 2, 5, 6, 7, 8, 9
};