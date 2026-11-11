/*
 * 7-Segment Pin (CC)      Arduino UNO Pin
 * Segment a (via 220Ω) ---> Pin 2
 * Segment b (via 220Ω) ---> Pin 3
 * Segment c (via 220Ω) ---> Pin 4
 * Segment d (via 220Ω) ---> Pin 5
 * Segment e (via 220Ω) ---> Pin 6
 * Segment f (via 220Ω) ---> Pin 7
 * Segment g (via 220Ω) ---> Pin 8
 * Common Cathode (GND) ---> GND
 */

int seg[] = {2, 3, 4, 5, 6, 7, 8};

int num[10][7] = {
    {1, 1, 1, 1, 1, 1, 0},  // 0
    {0, 1, 1, 0, 0, 0, 0},  // 1
    {1, 1, 0, 1, 1, 0, 1},  // 2
    {1, 1, 1, 1, 0, 0, 1},  // 3
    {0, 1, 1, 0, 0, 1, 1},  // 4
    {1, 0, 1, 1, 0, 1, 1},  // 5
    {1, 0, 1, 1, 1, 1, 1},  // 6
    {1, 1, 1, 0, 0, 0, 0},  // 7
    {1, 1, 1, 1, 1, 1, 1},  // 8
    {1, 1, 1, 1, 0, 1, 1}   // 9
};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(seg[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 7; j++) {
      digitalWrite(seg[j], num[i][j]);
    }
    delay(1000);
  }
}

