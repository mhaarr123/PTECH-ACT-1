class LEDBlinker {
  private:
    const int* pins; 
    int count;

  public:
    LEDBlinker(const int* ledPins, int ledCount) : pins(ledPins), count(ledCount) {}

    void begin() {
      for (int i = 0; i < count; i++) {
        pinMode(pins[i], OUTPUT); 
      }
    }

    void blinkLeftToRight() {
      for (int i = 0; i < count; i++) {
        digitalWrite(pins[i], HIGH); 
        delay(300);
        digitalWrite(pins[i], LOW);
      }
    }

    void blinkRightToLeft() {
      for (int i = count - 1; i >= 0; i--) {
        digitalWrite(pins[i], HIGH);
        delay(300);
        digitalWrite(pins[i], LOW);
      }
    }
};
const int ledPins[] = {1,2,3,4,5,6,7,8,9,10};
const int ledCount = sizeof(ledPins) / sizeof(ledPins[0]);
LEDBlinker ledBlinker(ledPins, ledCount);

void setup() {
  ledBlinker.begin();
}

void loop() {
  ledBlinker.blinkLeftToRight();
  ledBlinker.blinkRightToLeft();
}