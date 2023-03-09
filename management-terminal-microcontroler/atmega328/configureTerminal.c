int main(void){
  volatile unsigned char *PORTD = 0x0B;
  volatile unsigned char *DDRD = 0x0A;

  *DDRD = 0b11111111;
  *PORTD = 0b11110000;

  for(;;);
}
