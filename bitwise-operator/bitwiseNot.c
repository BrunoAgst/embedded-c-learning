#include <stdio.h>
#include <stdlib.h>

int main(){
  unsigned char A = 12;
  unsigned char r,l;

  //logic operator
  r = !A;
  printf("logic %d\n", r);

  //bitwise operator
  l = ~A;
  printf("bitwise %d\n", l);

  return 0;
}

