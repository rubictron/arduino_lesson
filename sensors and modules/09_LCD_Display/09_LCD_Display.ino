#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3f,2,1,0,4,5,6,7);  // Set the LCD I2C address here 0x3f

void setup()
{
  lcd.begin (16,2); 
  lcd.setBacklightPin(3,POSITIVE);
  lcd.setBacklight(HIGH);
  
  lcd.home (); 
  
}

void loop()
{
  lcd.clear();
  lcd.setCursor ( 4,0 );
  lcd.print("rubictron");
  delay(252);



}

