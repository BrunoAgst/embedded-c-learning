#include <stdio.h>
#include <stdlib.h>

int main(){
  char A = 8;
  char B = 3;
  char r1, r2;
  
  //logic operator
  r1 = A && B;

  //bitwise operator
  r2 = A & B;

  printf("logic %d\n", r1);
  printf("bitwise %d\n", r2);
  
}
