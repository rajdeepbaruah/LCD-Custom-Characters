//Code Written by RAJDEEP BARUAH

#include <LiquidCrystal.h>

LiquidCrystal lcd(2,A4,A3,A2,A1,A0);

byte b[8] = {
  B00000,
  B00000,
  B01010,
  B10101,
  B10001,
  B01010,
  B00100,  
  B00000
};

byte s[8] = {
   B00000,
  B00000,
  B01010,
  B11111,
  B11111,
  B01110,
  B00100,  
  B00000
};

void setup() {
  lcd.createChar(0,b);
  lcd.createChar(1,s);

  analogWrite(5,120);
  analogWrite(3,50);

  

  lcd.begin(16, 2);  
    
}

void loop() {
   lcd.setCursor(0,1);
   lcd.write(byte(1));
   
   lcd.setCursor(1,1);
   lcd.write(byte(0));

   lcd.setCursor(2,1);
   lcd.write("FROM  PRINCE");

   lcd.setCursor(14,1);
   lcd.write(byte(1));
   
   lcd.setCursor(15,1);
   lcd.write(byte(0));  
  }
