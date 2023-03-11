#include "hextobin.h"

//define pins
const int D2 = 2;
const int D3 = 3;
const int D4 = 4;
const int D5 = 5;
const int D6 = 6;
const int D7 = 7;
const int D8 = 8;
const int D9 = 9;

void setup() {
  
  // configure pins
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT);
  pinMode(D9, OUTPUT);

  // set hex and turn to bin
  unsigned char PORT = 0x06;
  char bin[8];
  hex_to_bin(PORT, bin);

  // see output
  digitalWrite(D2, bin[0] - '0');
  digitalWrite(D3, bin[1] - '0');
  digitalWrite(D4, bin[2] - '0');
  digitalWrite(D5, bin[3] - '0');
  digitalWrite(D6, bin[4] - '0');
  digitalWrite(D7, bin[5] - '0');
  digitalWrite(D8, bin[6] - '0');
  digitalWrite(D9, bin[7] - '0');
}

void loop() {}
