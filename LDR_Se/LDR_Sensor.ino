/*

 * LDR Module Pin       Arduino UNO Pin
 * VCC             ---> 5V
 * GND             ---> GND
 * AO (Analog Out) ---> A0

 */

const int ldr = A0;
int value = 0;

void setup() { Serial.begin(9600); }

void loop() {

  value = analogRead(ldr);

  Serial.print("Light Value: ");
  Serial.println(value);

  if (value > 500) {
    Serial.println("Bright Light");
  } else {
    Serial.println("Low Light");
  }

  delay(1000);
}
