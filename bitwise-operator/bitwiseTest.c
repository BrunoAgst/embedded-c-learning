#include <stdio.h>
#include <stdlib.h>

int main(void){
  char PORTD;
  char mask;
  PORTD = 0x00;
  mask = 1;
  mask = mask << 2;
  PORTD = PORTD | mask;
  
  if((PORTD & 1 << 2) != 0){
    printf("Bit on");
  } else {
    printf("Bit off");
  }
}
