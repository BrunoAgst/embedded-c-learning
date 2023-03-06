#include <stdlib.h>
#include <stdio.h>

int main(){
  char PORTD;
  char mask;

  PORTD = 0xFF;
  mask = 1;
  mask = mask << 2;
  mask = ~mask;
  PORTD = PORTD & mask;
  printf("PORTD: %d", PORTD);
  return 0;
}
