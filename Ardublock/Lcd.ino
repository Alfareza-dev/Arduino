#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal.h>

// For these LCD controls to work you MUST replace the standard LCD library with 'New LCD' from...
// https://bitbucket.org/fmalpartida/new-liquidcrystal/wiki/Home
// Direct download https://bitbucket.org/fmalpartida/new-liquidcrystal/downloads/LiquidCrystal_V1.2.1.zip
// Your project will not compile until this is done.
//
//                             RS  EN  d0  d1  d2  d3  LED 
LiquidCrystal lcd_I2C_Parallel(12, 11,  5,  4,  3,  2,  7, POSITIVE);

void setup()
{
  lcd_I2C_Parallel.begin (16, 2);
  lcd_I2C_Parallel.setBacklight(HIGH);
}

void loop()
{
  lcd_I2C_Parallel.setCursor( (1) - 1, (1) - 1 );
  lcd_I2C_Parallel.print( "MIN 2" );
  lcd_I2C_Parallel.setCursor( (1) - 1, (1) - 1 );
  lcd_I2C_Parallel.print( "SUKOHARJO" );
}


