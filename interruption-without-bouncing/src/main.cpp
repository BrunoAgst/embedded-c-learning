#include <Arduino.h>

#define TRUE 1
#define FALSE 0

volatile int count;
volatile int Flag;

void setup() {
  Serial.begin(9600);
  DDRB = 0x00;
  PORTB = 0x18;
  PCMSK0 |= (1<<PCINT3);
  PCICR |= (1<<PCIE0);
}

void loop() {
  Flag = count = FALSE;
  Serial.print("Contador de chave PCINT3.\n");
  Serial.print(count);
  Serial.print("\n");
  while(TRUE){
    while(Flag==FALSE);
    Flag=FALSE;
    Serial.print(count);
    Serial.print("\n");
  }
}

ISR(PCINT0_vect){
  count++;
  Flag=1;
}