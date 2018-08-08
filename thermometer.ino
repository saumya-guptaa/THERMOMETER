#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int inPin=0;

void setup() {
  lcd.begin(16,2);
}

void loop() {
  int value;
  value=analogRead(inPin);  
  lcd.setCursor(0,1);
  float millivolts=(value/1024.0)*5000;
  float celsius=millivolts/10;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(celsius);
  lcd.print("C");
  lcd.setCursor(0,1);
  lcd.print((celsius*9)/32 + 5);
  lcd.print(" F");
  delay(1000);
}
