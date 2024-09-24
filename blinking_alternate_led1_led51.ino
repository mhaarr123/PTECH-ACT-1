const int ilaw1 = 1;
const int ilaw2 = 2;
const int ilaw3 = 3;
const int ilaw4 = 4;
const int ilaw5 = 5;
const int ilaw6 = 6;
const int ilaw7 = 7;
const int ilaw8 = 8;
const int ilaw9 = 9;
const int ilaw10 = 10;
void setup()
{
 for (int i = ilaw1; i <= ilaw10; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
   for (int i = ilaw1; i <= ilaw5; i++) {
    digitalWrite(i, HIGH);
  }

  for (int i = ilaw6; i <= ilaw10; i++) {
    digitalWrite(i, LOW);
  }

  delay(300); 

  for (int i = ilaw1; i <= ilaw5; i++) {
    digitalWrite(i, LOW);
  }


  for (int i = ilaw6; i <= ilaw10; i++) {
    digitalWrite(i, HIGH);
  }

  delay(1000);
}
