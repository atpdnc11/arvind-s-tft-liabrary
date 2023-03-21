/************************************************************************

To create a digital clock using an Arduino, RTC 
(Real-Time Clock) module, and TFT (Thin Film Transistor)
 display with ILI9341 controller, you can follow these steps:

Materials:

Arduino Uno or similar board
RTC module (e.g., DS1307 or DS3231)
TFT display with ILI9341 controller
Jumper wires
Breadboard (optional)
Instructions:

Connect the RTC module to the Arduino board using the following connections:
VCC to 5V
GND to GND
SDA to A4
SCL to A5
Connect the TFT display to the Arduino board using the following connections:
CS to digital pin 10
MOSI to digital pin 11
MISO to digital pin 12
SCK to digital pin 13
DC to digital pin 9
RESET to digital pin 8
LED to 5V
Download and install the required libraries for the RTC module and TFT display:
RTClib by




**************************************************************************/



#include <Adafruit_ILI9341.h>
#include <SPI.h>
#include <Wire.h>
#include "RTClib.h"

#define TFT_CS 10
#define TFT_DC 9
#define TFT_RST 8

RTC_DS1307 rtc;
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  tft.begin();
  tft.setRotation(4);
  tft.fillScreen(ILI9341_BLACK);

  Wire.begin();
  rtc.begin();

  if (! rtc.isrunning()) {
    Serial.println("RTC is NOT running!");
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }
}

void loop() {
  DateTime now = rtc.now();

  int hour = now.hour();
  int minute = now.minute();
  int second = now.second();

  tft.setCursor(0, 100);
  tft.setTextColor(ILI9341_YELLOW);  tft.setTextSize(5);
  tft.print(hour < 10 ? "0" : "");  tft.print(hour);  tft.print(":");
  tft.print(minute < 10 ? "0" : "");  tft.print(minute);  tft.print(":");
  tft.print(second < 10 ? "0" : "");  tft.print(second);

 tft.setCursor(0, 180);
 tft.setTextColor(ILI9341_WHITE); 
 tft.setTextSize(2);
tft.println("arvind patil INDIA");
  delay(100);

tft.setCursor(0, 210);
 tft.setTextColor(ILI9341_RED);

tft.println("HAVE A NICE DAY");
delay(1000);

}
