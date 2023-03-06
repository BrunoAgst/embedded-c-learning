#include <stdio.h>
#include <stdlib.h>

int main(){
  char PORTD;
  char mask;

  PORTD = 0x00;

  mask = 1;

  mask = mask << 2;

  PORTD = PORTD | mask;

  printf("PORTD: %d", PORTD);

  return 0;
}
