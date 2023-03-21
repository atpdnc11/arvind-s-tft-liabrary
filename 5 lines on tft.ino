/**************************************************************
Here is an example code in C++ for Arduino using the ILI9341 display
 to display 5 lines of text in size 2:
 This code uses the Adafruit_ILI9341 library to interface with
  the ILI9341 display. The setup() function initializes the display
  and sets the text size and color. The loop() function is empty, 
  as there is nothing to continuously update on the display.
   The setCursor() and println() functions are used to position 
   the text on the screen and 
 display the 5 lines of text.
 PROJECT BY ARVIND PATIL ON 10M,ARCH 2023

NOTE WAIT TILL COMPLIANCE 


*************************************************************/


#include <Adafruit_ILI9341.h>

// Define pins for the display
#define TFT_CS 10
#define TFT_DC 9
#define TFT_MOSI 11
#define TFT_CLK 13
#define TFT_RST 8
#define TFT_MISO 12

// Define the display object
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_MOSI, TFT_CLK, TFT_RST, TFT_MISO);

void setup() {
  // Initialize the display
  tft.begin();
  tft.setRotation(4);  // Rotate the display if needed
  tft.fillScreen(ILI9341_BLACK);  // Fill the screen with black color

  // Set the text color and size
  tft.setTextSize(2);
  tft.setTextColor(ILI9341_WHITE);

  // Display 5 lines of text
  tft.setCursor(0, 0);
  tft.setTextColor(ILI9341_WHITE);
  
  tft.println(" I AM ARVIND PATIL");
 tft.setTextColor(ILI9341_WHITE);


  tft.setCursor(0, 40);
  tft.setTextColor(ILI9341_YELLOW);
 
  tft.println("AT THE AGE OF 72 ");
 
 tft.setTextColor(ILI9341_WHITE);
 
  tft.setCursor(0, 90);
  tft.setTextColor(ILI9341_RED);
  
  
  tft.println("I LEARNED ELECTRONICS");

 
 
  
  tft.setCursor(0, 140);
 tft.setTextColor(ILI9341_CYAN);
 
 
  tft.println("BY SIMULATION");
  tft.setTextColor(ILI9341_WHITE);
  
  
   tft.setCursor(0, 200);
  tft.setTextColor(ILI9341_WHITE);
 
 
  tft.println("THANKS WOKWI");


}

void loop() {
  // Nothing to do here
}
