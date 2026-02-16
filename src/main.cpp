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



void main_page(){
  tft.fillScreen(TFT_BLACK);
  tft.drawString("00:67",0,0,7);
  
}




void updatescreen(int page_number){
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_WHITE);
    tft.drawString("Welcome to page ", 20 , 64);
    tft.drawString(String(page_number), 20 , 74);
    delay(250);
}

void setup() {
  boot_screen();
  pinMode(BPLUS, INPUT_PULLUP);
  pinMode(BMINUS, INPUT_PULLUP);

}

void loop() {



if (digitalRead(BPLUS) == LOW) {
  if (page_number<=number_of_pages){
  ++ page_number; 
  updatescreen(page_number);
  

  }else { }

  }



if (digitalRead(BMINUS) == LOW) {
  if (0<page_number){
  -- page_number; 
    updatescreen(page_number);

    delay(250);
   

  }else { }

}

if(page_number == 1){
  main_page();
  delay(500);
}
  




}
