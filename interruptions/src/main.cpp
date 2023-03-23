#include <Arduino.h>
#define TRUE 1
#define FALSE 0

volatile int count;
volatile int Flag;

void rot_INT0(void);               

void setup() {
  //configure serial
  Serial.begin(9600);

  //configure pin and enable pullup
  DDRD = 0x00;
  PORTD = 0x01;

  //prepare int0 to falling
  attachInterrupt(digitalPinToInterrupt(21), rot_INT0, FALLING);
}

void loop() {
  Flag = count = 0x00; //zero the flag and the count
  Serial.println("Contador de chave cpm INT0.\n");
  Serial.print(count);
  Serial.print("\n");
  while(TRUE){
    while(Flag==0);
    Flag=0;
    Serial.print(count);
    Serial.print("\n");
  }
}

void rot_INT0(void){
  count++;
  Flag=1;
}