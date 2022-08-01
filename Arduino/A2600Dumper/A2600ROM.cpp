/*  
  A2600Dumper.ino - Atari 2600 Cartridge Dumper
  Copyright (C) 2022 DrVector
  
  Gestione ROM della cartuccia Atari 2600
*/

#include <Arduino.h>
#include "Const.h"
#include "SRHelper.h"

//******************************************************************************************************************//
//* Lettura di un byte all'indirizzo selezionato dal bus dati della cartuccia
//******************************************************************************************************************//
byte readByte(unsigned int address) {
  // Imposta indirizzo
  unsigned int addr = address + 0x1000;
  addressWrite(addr);
  //Serial.println("address=" + (String)addr);

  //delay(2);

  // Lettura pins D2/D9 (Bus Dati)
  byte bval = 0;
  for (int y = 0; y < 8; y++) {
    bitWrite(bval, y, digitalRead(dataPins[y]));
  }

  delay(1);

  // Serial.println("readByte=" + (String)bval);
  return bval;
}

void selectBank(int address) {
  // Imposta indirizzo
  unsigned int addr = address + 0x1000;
  addressWrite(addr);

  // Lettura pins D2/D9 (Bus Dati)
  byte bval = 0;
  for (int y = 0; y < 8; y++) {
    bitWrite(bval, y, digitalRead(dataPins[y]));
  }
}

void dumpROM(int size, int bankaddress) {
  // Serial.println("START DUMP ROM (" + (String)size + " byte)");

  unsigned int addr = 0;

  // Azzera lo shift register
  // addressWrite(0x0000);

  byte buffer[256];
  int index = 0;
  for (int i = 0; i < size; i++) {
    if (bankaddress > -1) {
      selectBank(bankaddress);      
    }  
    byte bval = readByte(addr + i);
    buffer[index] = bval;
    index ++;
    //Serial.println(bval, DEC);
    
    if (index == 256) {
      Serial.write(buffer, 256);
      index = 0;
    }
  }
    
  // Serial.println("END DUMP ROM");
}

//******************************************************************************************************************//
//* Dump ROM con Bankswitching
//******************************************************************************************************************//
void dumpROMBanked(int type) {
  switch(type) {
    // Atari 8K (F8)
    case 0:
      //selectBank(0x0FF8);
      dumpROM(4096, 0x0FF8);
      //selectBank(0x0FF9);
      dumpROM(4096, 0x0FF9);
      break;
  }  
}
