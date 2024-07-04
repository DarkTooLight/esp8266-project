
#include <LiquidCrystal_I2C.h>
#include <IRremote.h>
int IRPIN = D5;

LiquidCrystal_I2C lcd(0x27,16,2);

void setup(){
    lcd.init();
    lcd.backlight(); 
    
    IrReceiver.begin(IRPIN, ENABLE_LED_FEEDBACK);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("* IR decCoder *");
}

void loop(){
    if (IrReceiver.decode())

{
long int gg = IrReceiver.decodedIRData.decodedRawData;
      lcd.setCursor(0,1);
      lcd.print("Code : "); 
      lcd.print(gg,HEX);
      IrReceiver.resume();
        }
    
    delay(500);
    }