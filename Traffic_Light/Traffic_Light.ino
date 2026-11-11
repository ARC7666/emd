/*
 * Component               Arduino UNO Pin
 * Red LED (Anode via R)    ---> Pin 10
 * Yellow LED (Anode via R) ---> Pin 9
 * Green LED (Anode via R)  ---> Pin 8
 * All LED Cathodes (-)     ---> GND
 */

const int redPin = 10;
const int yellowPin = 9;
const int greenPin = 8;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // Red Light ON (4 sec)
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  delay(4000);

  // Green Light ON (4 sec)
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(4000);

  // Yellow Light ON (1.5 sec)
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(greenPin, LOW);
  delay(1500);
}

