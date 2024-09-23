const int oddLEDs[] = {2, 4, 6, 8, 10}; 
const int evenLEDs[] = {3, 5, 7, 9, 11}; 

void setup() {
    for (int i = 0; i < 5; i++) {
        pinMode(oddLEDs[i], OUTPUT);
        pinMode(evenLEDs[i], OUTPUT);
    }
}
void loop() {
    for (int i = 0; i < 5; i++) {
        digitalWrite(oddLEDs[i], HIGH); 
        delay(200);                      
        digitalWrite(oddLEDs[i], LOW);  
        delay(200);                      
    }
    for (int i = 0; i < 5; i++) {
        digitalWrite(evenLEDs[i], HIGH); 
        delay(200);                    
        digitalWrite(evenLEDs[i], LOW);  
        delay(200);                      
    }
}