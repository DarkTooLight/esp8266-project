#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

int btnUp = D7;
int btnDoun = D6;
int n = 0;

void setup(){
  lcd.init();
  lcd.backlight(); 
  
pinMode(btnUp,INPUT); pinMode(btnDoun,INPUT);
lcd.clear();
    
  }
    
void loop(){
  if(digitalRead(btnUp) == HIGH){
    n = n + 1;
  }
   if(digitalRead(btnDoun) == HIGH){
     n = n - 1;
   }
    
    lcd.setCursor(1,0);
    lcd.print("** +1  or  -1 **");
    
    lcd.setCursor(8,1);
    lcd.print(n);
    
    delay(100);
}