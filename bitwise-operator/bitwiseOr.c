#include <stdlib.h>
#include <stdio.h>

int main(){
  char A = 9;
  char B = 3;
  char r1,r2;

  //logic operator
  r1 = A || B;

  //bitwise operator
  r2 = A | B;

  printf("logic %d\n", r1);
  printf("bitwise %d\n", r2);

  return 0;
}
