/*
 * 16x2 LCD (LM016L)        Arduino UNO Pin
 * RS                  ---> Pin 12
 * E (Enable)          ---> Pin 11
 * D4                  ---> Pin 10
 * D5                  ---> Pin 9
 * D6                  ---> Pin 8
 * D7                  ---> Pin 7
 * VSS, RW, VEE        ---> GND
 * VDD                 ---> 5V
 *
 * 4x4 Keypad Pin           Arduino UNO Pin
 * Row A               ---> Pin 6
 * Row B               ---> Pin 5
 * Row C               ---> Pin 4
 * Row D               ---> Pin 3
 * Col 1               ---> Pin A0
 * Col 2               ---> Pin A1
 * Col 3               ---> Pin A2
 * Col 4               ---> Pin A3
 *
 * Keys Layout:
 * [ 7 ] [ 8 ] [ 9 ] [ / ]
 * [ 4 ] [ 5 ] [ 6 ] [ * ]
 * [ 1 ] [ 2 ] [ 3 ] [ - ]
 * [ C ] [ 0 ] [ = ] [ + ]
 */

#include <Keypad.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'7', '8', '9', '/'},
  {'4', '5', '6', '*'},
  {'1', '2', '3', '-'},
  {'C', '0', '=', '+'}
};

byte rowPins[ROWS] = {6, 5, 4, 3};
byte colPins[COLS] = {A0, A1, A2, A3};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

long num1 = 0;
long num2 = 0;
char op = '\0';
bool opIsPushed = false;
bool resultShown = false;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Calculator Ready");
  delay(1500);
  lcd.clear();
}

void loop() {
  char key = keypad.getKey();

  if (key != NO_KEY) {
    if (key == 'C') {
      num1 = 0;
      num2 = 0;
      op = '\0';
      opIsPushed = false;
      resultShown = false;
      lcd.clear();
    }
    else if (key >= '0' && key <= '9') {
      if (resultShown) {
        num1 = 0;
        num2 = 0;
        op = '\0';
        opIsPushed = false;
        resultShown = false;
        lcd.clear();
      }
      if (!opIsPushed) {
        num1 = num1 * 10 + (key - '0');
        lcd.print(key);
      } else {
        num2 = num2 * 10 + (key - '0');
        lcd.print(key);
      }
    }
    else if (key == '+' || key == '-' || key == '*' || key == '/') {
      if (resultShown) {
        resultShown = false;
      }
      if (num1 != 0 && !opIsPushed) {
        op = key;
        opIsPushed = true;
        lcd.print(key);
      }
    }
    else if (key == '=') {
      if (opIsPushed && !resultShown) {
        lcd.setCursor(0, 1);
        lcd.print("= ");
        if (op == '+') {
          lcd.print(num1 + num2);
        }
        else if (op == '-') {
          lcd.print(num1 - num2);
        }
        else if (op == '*') {
          lcd.print(num1 * num2);
        }
        else if (op == '/') {
          if (num2 == 0) {
            lcd.print("Err: Div/0");
          } else {
            lcd.print((float)num1 / num2);
          }
        }
        resultShown = true;
      }
    }
  }
}
