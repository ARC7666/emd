/*
 * 4x4 Keypad Pin           Arduino UNO Pin
 * Row A (R1)          ---> Pin 9
 * Row B (R2)          ---> Pin 8
 * Row C (R3)          ---> Pin 7
 * Row D (R4)          ---> Pin 6
 * Col 1 (C1)          ---> Pin 5
 * Col 2 (C2)          ---> Pin 4
 * Col 3 (C3)          ---> Pin 3
 * Col 4 (C4)          ---> Pin 2
 *
 * Operation:
 * Enter num1 -> Press 'A' (+) -> Enter num2 -> Press '#' (=)
 */

#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},  // 'A' is used as '+'
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}   // '#' is used as '='
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

long num1 = 0;
long num2 = 0;
bool isSecond = false;

void setup() {
  Serial.begin(9600);
  Serial.println("Keypad Addition Ready");
  Serial.println("Format: [num1] + [num2] =");
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    if (key >= '0' && key <= '9') {
      if (!isSecond) {
        num1 = num1 * 10 + (key - '0');
        Serial.print(key);
      } else {
        num2 = num2 * 10 + (key - '0');
        Serial.print(key);
      }
    }
    else if (key == 'A') {  // Addition operator
      isSecond = true;
      Serial.print(" + ");
    }
    else if (key == '#') {  // Equals operator
      long sum = num1 + num2;
      Serial.print(" = ");
      Serial.println(sum);

      // Reset for next addition
      num1 = 0;
      num2 = 0;
      isSecond = false;
      Serial.println("Enter new numbers:");
    }
    else if (key == '*') {  // Clear
      num1 = 0;
      num2 = 0;
      isSecond = false;
      Serial.println("\nCleared!");
    }
  }
}

