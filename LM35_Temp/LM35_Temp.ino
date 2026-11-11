/*
 * LM35 Pin          Arduino UNO Pin
 * Left (VCC)   ---> 5V
 * Middle (Out) ---> A0
 * Right (GND)  ---> GND
 */

int sensor = A0;
int value;
float voltage;
float temperature;

void setup() {
  Serial.begin(9600);
}

void loop() {
  value = analogRead(sensor);

  voltage = value * 5.0 / 1023.0;

  temperature = voltage * 100;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  delay(1000);
}

