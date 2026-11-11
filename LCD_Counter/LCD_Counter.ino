/*
 * 16x2 LCD (LM016L)        Arduino UNO Pin
 * RS                  ---> Pin 12
 * E (Enable)          ---> Pin 11
 * D4                  ---> Pin 5
 * D5                  ---> Pin 4
 * D6                  ---> Pin 3
 * D7                  ---> Pin 2
 * VSS, RW, VEE        ---> GND
 * VDD                 ---> 5V
 */

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int count = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Up Counter");
  delay(1000);
  lcd.clear();
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Count Value:");

  lcd.setCursor(0, 1);
  lcd.print(count);

  count++;
  delay(1000);
}

