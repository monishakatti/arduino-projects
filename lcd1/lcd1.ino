#include <LiquidCrystal.h>//Don't forget to enter this library
#include<dht.h>
dht DHT;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define DHT11_PIN 6

void setup() {

// set up the LCD's number of columns and rows:

lcd.begin(16, 2);
int chk = DHT.read11(DHT11_PIN);

// Print a message to the LCD.
lcd.print(" Hum " );

lcd.print(DHT.humidity, 1);
lcd.print("temp");
lcd.print(DHT.temperature, 1);
delay(2000);
}

void loop() {
  int chk = DHT.read11(DHT11_PIN);
  
  Serial.println(" Humidity " );

Serial.println(DHT.humidity, 1);

Serial.println(" Temparature ");

Serial.println(DHT.temperature, 1);
delay(2000);

// set the cursor to column 0, line 1

// (note: line 1 is the second row, since counting begins with 0):

lcd.setCursor(0, 1);

// print the number of seconds since reset:

lcd.setCursor(0, 1); // print the number of seconds since reset: lcd.print(millis() / 1000);

}
