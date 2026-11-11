/*
 * 4x4 Keypad Pin          Arduino UNO Pin
 * Row 1 (R1)        ---> Pin 9
 * Row 2 (R2)        ---> Pin 8
 * Row 3 (R3)        ---> Pin 7
 * Row 4 (R4)        ---> Pin 6
 * Column 1 (C1)     ---> Pin 5
 * Column 2 (C2)     ---> Pin 4
 * Column 3 (C3)     ---> Pin 3
 * Column 4 (C4)     ---> Pin 2
 */

#include <Keypad.h>

const byte ROWS = 4; 
const byte COLS = 4; 

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(9600);
}

void loop() {
  char customKey = keypad.getKey();
  
  if (customKey) {
    Serial.print("Pressed: ");
    Serial.println(customKey);
  }
}

