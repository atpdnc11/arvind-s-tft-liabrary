#include <Adafruit_GFX.h>    // include the graphics library
#include <Adafruit_ILI9341.h> // include the ILI9341 TFT library

// Define the pins used by the display
#define TFT_CS 10
#define TFT_DC 9
#define TFT_MOSI 11
#define TFT_CLK 13
#define TFT_RST 8
#define TFT_MISO 12

// Define some colors
#define BACKGROUND_COLOR ILI9341_BLACK
#define TRIANGLE_COLOR ILI9341_BLUE

// Create an instance of the ILI9341 TFT display object
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_MOSI, TFT_CLK, TFT_RST, TFT_MISO);

void setup() {
  // Initialize the TFT display
  tft.begin();
}

void loop() {
  // Clear the screen with the background color
  tft.fillScreen(BACKGROUND_COLOR);

  // Draw a triangle with the triangle color
  tft.fillTriangle(80, 40, 160, 200, 200, 40, TRIANGLE_COLOR);

  delay(5000); // Wait for 5 seconds
}
