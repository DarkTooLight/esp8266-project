#include <LiquidCrystal_I2C.h>
int n = 0 ;

LiquidCrystal_I2C lcd(0x27,16,2);

void setup(){
  lcd.init();
  lcd.backlight();
}

void loop(){
  n = n + 1 ;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Dark Too Light");
  lcd.setCursor(0,1);
  lcd.print("It Is Working ");
  lcd.print(n);
  delay(500);
    
    n = n + 1 ;
    
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("It Is Working ");
  lcd.print(n);
  lcd.setCursor(0,1);
  lcd.print("Dark too Light");
    delay(500);
}