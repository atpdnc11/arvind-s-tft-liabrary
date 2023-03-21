/********************************************************

The maximum number of lines that can be displayed on a TFT ILI9341 display in set rotation mode 4 and font size 2 
depends on the resolution of the display. Assuming a display resolution of 240 x 320 pixels, we can calculate the maximum number of lines as follows:

Each character in font size 2 is 16 pixels wide and 24 pixels tall
The display width is 240 pixels, so the maximum number of characters per
 line is 240 / 16 = 15
The display height is 320 pixels, so the maximum number of lines 
is 320 / 24 = 13.33, which rounds down to 13
Therefore, the maximum number of lines that can be displayed on 
a TFT ILI9341 display in set rotation mode 4 and font size 2 is 13.

Here's an example code in C++ for Arduino that demonstrates
 how to display multiple lines of text on the TFT display:


by arvind patil11 march 2023


*********************************************************************/

#include <Adafruit_GFX.h>    // include the graphics library
#include <Adafruit_ILI9341.h> // include the ILI9341 TFT library

// Define the pins used by the display
#define TFT_CS 10
#define TFT_DC 9
#define TFT_MOSI 11
#define TFT_CLK 13
#define TFT_RST 8
#define TFT_MISO 12

// Create an instance of the ILI9341 TFT display object
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_MOSI, TFT_CLK, TFT_RST, TFT_MISO);

void setup() {
  // Initialize the TFT display
  tft.begin();
  tft.setRotation(4); // Set the display rotation to 4

  // Set the font size to 2
  tft.setTextSize(2);
}

void loop() {
  // Clear the screen
  tft.fillScreen(ILI9341_BLACK);

  // Display multiple lines of text
  tft.setTextColor(ILI9341_RED);
  tft.setCursor(0, 0);
  tft.println("Each character");
  tft.setCursor(0, 24);
  tft.println("in font size 2");
  tft.setCursor(0, 48);
  tft.println("is 16 pixle");
  tft.setCursor(0, 72);
  tft.println("and 24 pixle tall");
  tft.setCursor(0, 96);
  tft.println("width is 240 pixle");
  tft.setCursor(0, 120);
  tft.println("max charectors");
  tft.setCursor(0, 144);
  tft.println("240/16=15");
  tft.setCursor(0, 168);
  tft.println("max lines are");
  tft.setCursor(0, 192);
  tft.println("324/24==13");
  tft.setCursor(0, 216);
  tft.println("assuming in");
  tft.setCursor(0, 240);
  tft.println("rotation 4");
  tft.setCursor(0, 264);
  tft.println("text font =2");
  tft.setCursor(0, 288);
  tft.println("by arvind");

  delay(30000); // Wait for 5 seconds
}