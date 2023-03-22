#include <Arduino.h>
#define LEDRED PB6
#define LEDGREEN PB5
void setup() {
  //configure ledred
  DDRB = DDRB | (1 << DDB6);
  PORTB = PORTB | (0 << LEDRED);

  //configure ledgreen
  DDRB = DDRB | (1 << DDB5);
  PORTB = PORTB | (0 << LEDGREEN);

}

void loop() {
  int i;

  //wave 1
  for(i = 0; i < 100; i++){
    PORTB = PORTB ^ (1 << LEDGREEN);
    delay(50);
  }
  PORTB = PORTB & (1 << LEDGREEN);

  //wave2
  for(i = 0; i < 100; i++){
    PORTB = PORTB ^ (1 << LEDRED);
    delay(50);
  }
  PORTB = PORTB & (1 << LEDRED);

  //wave3
  for(i = 0; i < 100; i++){
    PORTB = PORTB ^ ((1 << LEDGREEN) | ( 1 << LEDRED));
    delay(50);
  }
  PORTB = PORTB & ((1 << LEDGREEN) | (1 << LEDRED));

  //wave4 
  PORTB = PORTB | (1 << LEDGREEN);
  for(i = 0; i < 100; i++){
    PORTB = PORTB ^ (1 << LEDGREEN);
    delay(50);
    PORTB = PORTB ^ (1<<LEDRED);
    delay(50);
  }

  PORTB = PORTB | ~((1 << LEDGREEN) | (1 << LEDRED));
  delay(1000);
}
