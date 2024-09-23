
int leds[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int delayTime = 300;

void setup() {
    for (int i = 0; i < 10; i++) {
        pinMode(leds[i], OUTPUT);
    }
}
void loop() {   
    for (int i = 0; i < 9; i += 2) {
        turnOnPair(i);
    }
    for (int i = 6; i >= 0; i -= 2) {
        turnOnPair(i);
    }
}
void turnOnPair(int index) {
    digitalWrite(leds[index], HIGH);    
    digitalWrite(leds[index + 1], HIGH); 
    delay(delayTime);                    
    turnOffAll();                       
}
void turnOffAll() {
    for (int i = 0; i < 10; i++) {
        digitalWrite(leds[i], LOW);
    }
}