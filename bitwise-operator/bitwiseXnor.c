#include <stdlib.h>
#include <stdio.h>

int main(){
  char A = 12;
  char B = 5;
  char r1,r2;

  //logic operator
  r1 = (A && !B) || (!A && B);

  //bitwise operator
  r2 = A ^ B;

  printf("logic: %d\n", r1);
  printf("bitwise: %d", r2);

  return 0;
}
