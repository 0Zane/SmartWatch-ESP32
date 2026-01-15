#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

// TFT_MISO 19
// TFT_MOSI (SDA) 23
// TFT_SCLK 18
// TFT_CS   15  
// TFT_DC    2  
// TFT_RST   4 


void setup() {
  tft.init();
  Serial.begin(256000);
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  Serial.println("Setup done");
  tft.setTextColor(TFT_BLUE);
  tft.drawString("Smart Watch initializing...",0,0);
}

void loop() {
  

}
