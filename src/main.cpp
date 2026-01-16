#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();
int page_number = 0;
String serial_input = "0";
const int BPLUS = 26;
const int BMINUS = 27;

// TFT_MISO 19
// TFT_MOSI (SDA) 23
// TFT_SCLK 18
// TFT_CS   15  
// TFT_DC    2  
// TFT_RST   4 


void setup() {
  pinMode(BPLUS, INPUT_PULLDOWN);
  pinMode(BMINUS, INPUT_PULLDOWN);
  tft.init();
  Serial.begin(115200);
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  Serial.println("Setup done");
  tft.setTextColor(TFT_BLUE);
  tft.drawString("Smart Watch initializing...",0,0);
  delay(2000);
}

void loop() {


  
  if (page_number == 0){
    tft.fillScreen(TFT_WHITE);
    tft.setTextColor(TFT_BLACK);
    tft.drawString("Welcome to page 0", 20 , 64);

  }
  if (page_number == 1){
    tft.fillScreen(TFT_BLUE);
    tft.setTextColor(TFT_BLACK);
    tft.drawString("Welcome to page 1", 20 , 64);

  }
  if (page_number == 2){
    tft.fillScreen(TFT_RED);
    tft.setTextColor(TFT_BLACK);
    tft.drawString("Welcome to page 2", 20 , 64);

  }
  if (page_number == 3){
    tft.fillScreen(TFT_YELLOW);
    tft.setTextColor(TFT_BLACK);
    tft.drawString("Welcome to page 3", 20 , 64);

  }
  if (page_number == 4){
    tft.fillScreen(TFT_YELLOW);
    tft.setTextColor(TFT_BLACK);
    tft.drawString("Welcome to page 4", 20 , 64);

  }
  if (page_number == 5){
    tft.fillScreen(TFT_YELLOW);
    tft.setTextColor(TFT_BLACK);
    tft.drawString("Welcome to page 5", 20 , 64);

  }



}
