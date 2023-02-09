#pragma once
#include <LiquidCrystal_I2C.h>
#include <Wire.h>

//LiquidCrystal_I2C lcd;

class LiquidCrystal_I2C_Menu
{
  public:
  LiquidCrystal_I2C_Menu(LiquidCrystal_I2C lcd);
  void Print_Scrin ();
};
