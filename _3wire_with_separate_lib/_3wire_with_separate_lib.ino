/*
  LiquidCrystal Serial2Parallel Library - Hello World
 
 Demonstrates the use a 16x2 LCD display using 3 wires.  The LiquidCrystal
 library works with all LCD displays that are compatible with the 
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.
 
 This sketch prints "Hello World!" to the LCD
 and shows the time.
 
 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe
 library modified 31 Jan 2013
 by Matteo Benetti (http://www.alpheratz1991.com)
 example modified 31 Jan 2013
 by Matteo Benetti (http://www.alpheratz1991.com)
 
 This example code is in the public domain.
*/

//http://www.alpheratz1991.com/2014/02/arduino-3-wires-hd44780-lcd-display.html

// include the modified LiquidCrystal library:
#include "LiquidCrystalS2P.h"

// initialize the library with the numbers of the interface pins

// 7 -> Register Clock
// 6 -> Serial Clock
// 5 -> Serial data line

LiquidCrystal lcd(6, 7,5);

void setup() {
  delay(2000);
  
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
  
  Serial.begin(9600);
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis()/1000);
  Serial.println(millis()/1000);
}

