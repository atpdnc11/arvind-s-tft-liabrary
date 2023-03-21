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
  tft.setTextSize(1);
}

void loop() {
  // Clear the screen
  tft.fillScreen(ILI9341_BLACK);

  // Display 15 lines of text
  for (int i = 0; i < 20; i++) {
    // Set the cursor to the current line
    tft.setCursor(0, i * 16);

    // Display the line number
    tft.print("satymev jayate ");
    tft.print(i + 1);
  }

  delay(5000); // Wait for 5 seconds
}
