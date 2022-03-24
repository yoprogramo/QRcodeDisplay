#include <Arduino.h>
#include "qrcodedisplay.h"
#include "qrencode.h"


void QRcodeDisplay::init() {
  // Default values
  this->offsetsX = 42;
  this->offsetsY = 10;
  this->screenwidth = 128;
  this->screenheight = 64;
  this->QRDEBUG = false;
  this->multiply = 1;
}

void QRcodeDisplay::init(uint16_t width, uint16_t height) {
  // Default values
  this->screenwidth = width;
  this->screenheight = height;
  this->QRDEBUG = false;
  int min = this->screenwidth;
  if (this->screenheight<this->screenwidth)
      min = this->screenheight;
  this->multiply = min/WD;
  this->offsetsX = (width - (WD*this->multiply))/2;
  this->offsetsY = (height - (WD*this->multiply))/2;
}

void QRcodeDisplay::debug(){
	QRDEBUG = true;
}

void QRcodeDisplay::render(int x, int y, int color){
  x=(x*multiply)+offsetsX;
  y=(y*multiply)+offsetsY;
  this->drawPixel(x,y,color);
}

void QRcodeDisplay::create(String message) {

  // create QR code
  message.toCharArray((char *)strinbuf,260);
  qrencode();
  this->screenwhite();
  
  // print QR Code
  for (byte x = 0; x < WD; x+=2) {
    for (byte y = 0; y < WD; y++) {
      if ( QRBIT(x,y) &&  QRBIT((x+1),y)) {
        // black square on top of black square
        this->render(x, y, 1);
        this->render((x+1), y, 1);
      }
      if (!QRBIT(x,y) &&  QRBIT((x+1),y)) {
        // white square on top of black square
        this->render(x, y, 0);
        this->render((x+1), y, 1);
      }
      if ( QRBIT(x,y) && !QRBIT((x+1),y)) {
        // black square on top of white square
        this->render(x, y, 1);
        this->render((x+1), y, 0);
      }
      if (!QRBIT(x,y) && !QRBIT((x+1),y)) {
        // white square on top of white square
        this->render(x, y, 0);
        this->render((x+1), y, 0);
      }
    }
  }
  this->screenupdate();
}
