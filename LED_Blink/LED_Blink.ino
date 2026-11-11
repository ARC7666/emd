/*
 * Component               Arduino UNO Pin
 * Resistor (220 ohm) ---> Pin 13 (IO13)
 * Resistor other end ---> LED Anode (+)
 * LED Cathode (-)    ---> GND
 */

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);

  digitalWrite(13, LOW);
  delay(1000);
}

