#include <Arduino.h>
#include <TFT_eSPI.h>

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

  Serial.println(page_number);


if (digitalRead(BPLUS) == HIGH) {
  if (page_number<=number_of_pages){
  ++ page_number; 
  delay(300);

  }else { }

  }



if (digitalRead(BMINUS) == HIGH) {
  if (0<page_number){
  -- page_number; 


    delay(300);
   

  }else { }

}
  

    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_WHITE);
    tft.drawString("Welcome to page ", 20 , 64);
    tft.drawString(String(page_number), 20 , 74);



}
