const int ledCount = 10;
const int ledPins[ledCount] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

void setup() {

  for (int i = 0; i < ledCount; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {

  for (int i = 0; i < ledCount; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(200);
    digitalWrite(ledPins[i], LOW);
  }
}