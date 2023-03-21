#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include <SPI.h>
#define sck 13
#define cs 9
#define reset 8
#define dc 10



// create a TFT ILI9341 object
Adafruit_ILI9341 tft = Adafruit_ILI9341(10, 9);


void setup() {
// initialize the TFT display
tft.begin();
tft.setRotation(3);
tft.fillScreen(ILI9341_BLACK);
}

void loop() {
// draw the first circle in red
tft.fillCircle(160, 120, 100, ILI9341_RED);
delay(2000);
// draw the second circle in green
tft.fillCircle(160, 120, 80, ILI9341_GREEN);
delay(2000);
// draw the third circle in blue
tft.fillCircle(160, 120, 60, ILI9341_BLUE);
delay(2000);
// draw the text "Arvind" in white
// draw the third circle in blue
tft.fillCircle(160, 120, 40, ILI9341_YELLOW);
delay(2000);
// draw the third circle in blue
tft.fillCircle(160, 120, 20, ILI9341_WHITE);
delay(2000);

tft.setCursor(60, 220);
tft.setTextColor(ILI9341_GREEN);
tft.setTextSize(2);
tft.println("Arvind patil 13/2/23");



}

