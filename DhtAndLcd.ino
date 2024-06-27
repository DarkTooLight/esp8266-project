#include"DHT.h" 
#define DHTPIN D5
#define DHTTYPE DHT11 
DHT dht(DHTPIN,DHTTYPE); 
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); 



void setup() { 
	dht.begin();// initialize the sensor 
	lcd.backlight();// turn on lcd backlight 
	lcd.init();// initialize lcd 
} 
void loop() { 
	lcd.clear(); 
	  lcd.setCursor(0,0);// set the cursor on the first row and column 
	  lcd.print("Humidity="); 
	  lcd.print((float)dht.readHumidity());//print the humidity 
	  lcd.print("%"); 
	  lcd.setCursor(0,1);//set the cursor on the second row and first column 
	  lcd.print("Temp="); 
	  lcd.print((float)dht.readTemperature());//print the temperature 
	  lcd.print("Celsius"); 
	  delay(2000); 
	  lcd.clear(); 
} 
