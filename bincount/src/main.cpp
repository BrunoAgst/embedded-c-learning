#include <Arduino.h>
#define RED PB4
#define WHITE PB5
#define GREEN PB6
#define YELLOW PB7
#define PUSHBUTTON PINH6

int count = 4;
void setup() {
  // configure pins
  DDRB |= ((1<<DDB4) | (1<<DDB5) | (1<<DDB6) | (1<<DDB7)); //configure pins to output
  PORTB &= ~((1<<RED) | (1<<WHITE) | (1<<GREEN) | (1<<YELLOW)); //initialize pins with 0
  DDRH |= (0<<DDH6); //configure pushbutton
  PORTH |= (1<<PH6); //configure pullup
}

void loop() {
  if((PINH & (1<<PUSHBUTTON)) == 0){
    PORTB |= (1<<count);
    count++;
    if(count > 8){ //reset count
      PORTB &= ~((1<<RED) | (1<<WHITE) | (1<<GREEN) | (1<<YELLOW));
      count = 4;
    }
    delay(300);
  }
}
   