#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

int k;
void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    k = Serial.parseInt();
    lcd.init();
    lcd.backlight();
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(k);
  }
}
