#include <stdio.h>
#include <stdlib.h>

#ifndef BIT_H
#define BIT_H

#define bitSet(arg, bit) ((arg) |= (1<<(bit)))
#define bitClr(arg, bit) ((arg) &= ~(1<<(bit)))
#define bitFlp(arg, bit) ((arg) ^= (1<<(bit)))
#define bitTst(arg, bit) ((arg) &  (1<<(bit)))

#endif /* BIT_H */

int main(){
  char PORT = 0x0F;// 4 bits on and 4 bits off
  printf("%x\n", PORT);
  bitSet(PORT, 5);
  printf("%x\n", PORT);
  bitClr(PORT, 1); 
  printf("%x\n", PORT);
  bitFlp(PORT, 2);
  printf("%x\n", PORT);
  bitFlp(PORT, 6);
  printf("%x\n", PORT);
  if(bitTst(PORT, 0) != 0){
    printf("Bit on");
  } else {
    printf("Bit off");
  }
}
