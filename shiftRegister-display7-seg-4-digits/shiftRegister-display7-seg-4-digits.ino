#define DATA 7
#define STCP 8
#define SHCP 9
#define DISPLAY1 2
#define DISPLAY2 3
#define DISPLAY3 4
#define DISPLAY4 5

byte digitList[10] = {
  B10011111,
  B00000110,
  B01011011,
  B01001111,
  B11000110,
  B11001101,
  B11011101,
  B00000111,
  B11011111,
  B11001111
};

void setup() {

  pinMode(DISPLAY1, OUTPUT);
  pinMode(DISPLAY2, OUTPUT);
  pinMode(DISPLAY3, OUTPUT);
  pinMode(DISPLAY4, OUTPUT);

  pinMode(DATA, OUTPUT);
  pinMode(STCP, OUTPUT);
  pinMode(SHCP, OUTPUT);

  digitalWrite(DISPLAY4, LOW);
  digitalWrite(DISPLAY3, HIGH);
  digitalWrite(DISPLAY2, HIGH);
  digitalWrite(DISPLAY1, HIGH);

  writeDigit();
}

void loop(){}

void writeDigit(void){
  for(int x = 0; x <= 9; x++){
    digitalWrite(STCP, LOW);
    for(int y = 7; y >= 0; y--){
      digitalWrite(DATA, bitRead(digitList[x], y));
      digitalWrite(SHCP, HIGH);
      digitalWrite(SHCP, LOW);
    }
    digitalWrite(STCP, HIGH);
    delay(1000);
  }
}
