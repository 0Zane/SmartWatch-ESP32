#include <Arduino.h>
#include <TFT_eSPI.h>
#include <display.h>

TFT_eSPI tft = TFT_eSPI();
int page_number = 0;
String serial_input = "0";
const int BPLUS = 26;
const int BMINUS = 27;
const int BSELECT = 25;
int number_of_pages =  5;

//PROTOTYPING PINOUT

//SCREEN
// TFT_MISO 19
// TFT_MOSI (SDA) 23
// TFT_SCLK 18
// TFT_CS   15  
// TFT_DC    2  
// TFT_RST   4 

//BUTTONS
//BPLUS 26
//BSELECT 25
//BMINUS 27




// STEPS THAT MAIN.CPP WILL FOLLOW

// BEGIN TFT
// BOOT SCREEN
//GET TIME FFROM RTC MODULE

void boot_screen(){
  tft.init();
  Serial.begin(115200);
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  Serial.println("Setup done");
  tft.setTextColor(TFT_WHITE);
  tft.drawString("OMNIHILUM",45,TFT_WIDTH/2,2);
  tft.drawRect(10,10,TFT_HEIGHT-20,TFT_WIDTH-20,TFT_WHITE);
  delay(2000);
}
