#include <LiquidCrystal.h>// include the library code
/**********************************************************/
char array1[]="Hello, world!";
char array2[]="From: ATmega328";  //the string to print on the LCD
int delayTime = 50; // ms
int blinkTime = 3000; // ms
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 9, 8, 7, 6);
/*********************************************************/
void setup() {
  lcd.begin(16, 2);  // set up the LCD's number of columns and rows:
  lcd.setCursor(0, 0);
}
/*********************************************************/
void loop() {
    lcd.clear();
    lcd.home();
    
    for(int posCounter1 = 0; posCounter1 < sizeof(array1) - 1; ++posCounter1) {
        lcd.print(array1[posCounter1]);
        delay(delayTime);
    }
    
    lcd.blink();
    delay(blinkTime);
    lcd.noBlink();
    
    lcd.setCursor(0, 1);
    for(int posCounter2 = 0; posCounter2 < sizeof(array2) - 1; ++posCounter2) {
        lcd.print(array2[posCounter2]);
        delay(delayTime);
    }
    
    lcd.blink();
    delay(blinkTime);
    lcd.noBlink();
}
/************************************************************/
