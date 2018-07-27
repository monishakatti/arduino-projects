#include <LiquidCrystal.h>//Don't forget to enter this library
#include<dht.h>
dht DHT;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define DHT11_PIN 3

void setup() {
Serial.begin(9600);

Serial.println("welcome to TechPonder Humidity and temperature Detector"); 

// set up the LCD's number of columns and rows:

lcd.begin(16, 2);
 int chk = DHT.read11(DHT11_PIN);

lcd.print(" Humidity " );



// Print a message to the LCD.
}

void loop() {
 

// set the cursor to column 0, line 1

// (note: line 1 is the second row, since counting begins with 0):

lcd.setCursor(0, 1);

// print the number of seconds since reset:

lcd.setCursor(0, 1); // print the number of seconds since reset: lcd.print(millis() / 1000);

}
