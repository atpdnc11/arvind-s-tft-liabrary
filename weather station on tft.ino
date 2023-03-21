#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include <DHT.h>

#define DHTPIN 2     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321

#define TFT_CS 10
#define TFT_DC 9
#define TFT_RST 8

#define DHTTEMP 0
#define DHTHUM 1

DHT dht(DHTPIN, DHTTYPE);

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  tft.begin();
  tft.setRotation(3);
  tft.fillScreen(ILI9341_BLACK);
  dht.begin();
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  tft.setCursor(0, 0);
  tft.setTextSize(3);
  tft.setTextColor(ILI9341_GREEN);
  tft.print("Temperature:");
  tft.println(temperature);
 
 
 tft.setTextColor(ILI9341_YELLOW);
   tft.print("Humidity: ");
  tft.println(humidity);
  delay(2000);

 tft.setCursor(20, 70);
 tft.setTextColor(ILI9341_RED);
   tft.println("by Arvind patil ");
  tft.println("have a nice day ");
  tft.setTextColor(ILI9341_CYAN);
   tft.println(" ");
tft.setTextSize(2);
   tft.println("simulation project");
  
  
  delay(2000);
}