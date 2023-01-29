#include <AnalogKey.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <EncButton.h>

LiquidCrystal_I2C lcd(0x20, 16, 2);

EncButton<EB_TICK, VIRT_BTN> btn0;
EncButton<EB_TICK, VIRT_BTN> btn1;
EncButton<EB_TICK, VIRT_BTN> btn2;
EncButton<EB_TICK, VIRT_BTN> btn3;
EncButton<EB_TICK, VIRT_BTN> btn4;
EncButton<EB_TICK, VIRT_BTN> btn5;

// создаём массив значений сигналов с кнопок
int16_t sigs[6] = {
  1023, 853, 613, 383, 219, 109
};

// указываем пин, количество кнопок и массив значений
AnalogKey<A0, 6, sigs> keys;

void setup()
{
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();// включаем подсветку
}

void loop() 
{
  btn0.tick(keys.status(0));
  btn1.tick(keys.status(1));
  btn2.tick(keys.status(2));
  btn3.tick(keys.status(3));
  btn4.tick(keys.status(4));
  btn5.tick(keys.status(5));

  if(btn0.release()) 
  {
    lcd.clear();
    lcd.print("btn0Unpres");
  }
   
  if(btn1.release()) 
  {
    lcd.clear();
    lcd.print("btn1Unpres");
  }
   
  if(btn2.release())
  {
    lcd.clear();
    lcd.print("btn2Unpres");
  } 
  
  if(btn3.release())
  {
    lcd.clear();
    lcd.print("btn3Unpres");
  } 
   
  if(btn4.release()) 
  {
    lcd.clear();
    lcd.print("btn4Unpres"); 
  }

  if(btn5.release())
  {
    lcd.clear();
    lcd.print("btn5Unpres");
  } 
}
