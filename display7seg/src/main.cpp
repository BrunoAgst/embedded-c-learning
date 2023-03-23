#include <Arduino.h>

void writeNumbers(int num);
int count = 0x00;

void setup() {
  //configure pins
  DDRB |= 0xF0;
  DDRH |= 0x78;
  DDRE |= 0x00;

  //configure output to zero
  PORTB = 0x00;
  PORTH = 0x00;

  PORTE = 0x08; //configure pullup
}

void loop() {
  if((PINE & 0x08) == 0){
    writeNumbers(count);
    count += 0x01;
    delay(300);
  }
  if(count > 9){
    count = 0;
  }
}

void writeNumbers(int num){
  switch (num){
  case 0:
    PORTB = 0xF0;
    PORTH = 0x60;
    break;
  case 1:
    PORTB = 0x60;
    PORTH = 0x00;
    break;
  case 2:
    PORTB = 0xD0;
    PORTH = 0x50;
    break;
  case 3:
    PORTB = 0xF0;
    PORTH = 0x10;
    break;
  case 4:
    PORTB = 0x60;
    PORTH = 0X30;
    break;
  case 5:
    PORTB = 0xB0;
    PORTH = 0x30;
    break;
  case 6:
    PORTB = 0xB0;
    PORTH = 0x70;
    break;
  case 7:
    PORTB = 0xE0;
    PORTH = 0x00;
    break;
  case 8:
    PORTB = 0xF0;
    PORTH = 0xF0;
    break;
  case 9:
    PORTB = 0xF0;
    PORTH = 0xB0;
    break;
  default:
    PORTB = 0x00;
    PORTH = 0x00;
    break;
  }
}