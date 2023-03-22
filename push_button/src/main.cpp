#include <Arduino.h>
#define LEDINTERN PB7
#define PUSHBUTTON PINB6

void setup() {
  // put your setup code here, to run once:
  DDRB |= (1<<DDB7);
  DDRB |= (0<<DDB6);
  PORTB &= ~(1<<LEDINTERN);
  PORTB |= (1<<PB6);

}

void loop() {
  // put your main code here, to run repeatedly:
  if((PINB & (1<<PUSHBUTTON)) == 0){
    PORTB |= (1<<LEDINTERN);
    delay(50);
  }
  PORTB &= ~(1<<LEDINTERN);
}