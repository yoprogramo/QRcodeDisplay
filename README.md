# QRcodeDisplay

This is a rework of the library ESP QRcode (https://github.com/yoprogramo/ESP_QRcode) to make it more flexible and be capable to include more
displays sharing the same base code.  

You should use, at least one of the subclasses (this file will be populated with the references) to be able to display some QR, choose the corresponding to
the hardware you have available.

Each subclass have its own repository with its own dependencies. This library have not dependencies. Depending your hardware you can choose one of the following approved subclasses, please visit the links to see the dependencies and hardware support:

* QRcodeOled: https://github.com/yoprogramo/QRcodeOled
* QRcode_ST7735: https://github.com/yoprogramo/QRcode_ST7735
* QRcode_ST7789: https://github.com/yoprogramo/QRcode_ST7789
* QRcode_eSPI: https://github.com/yoprogramo/QRcode_eSPI
* QRcodeEink: https://github.com/yoprogramo/QRcodeEink
* QRcode_HUB75: https://github.com/yoprogramo/QRcode_HUB75

If you do not find match for your display model feel free to contribute with a new subclasss or file an Issue here.

# How to select a different QR version

By default the QR version is 7 and ECC 1. If you wanna use a different version you have to define in your project QRCODEVERSION with a number from 1 to 10.
We have chosen this conditional compilation to reduce the library footprint for small devices. Frame files courtesy of @slavendam.

## Breaking changes in version 2.0.0
To avoid conflict with other libraries we have renamed the file qrcode.h to qrcodedisplay.h, so all the subclasses have to do the same change.

## Examples

### Oled

![qrcode](https://github.com/yoprogramo/ESP_QRcode/blob/master/src/img/qrcode.JPG?raw=true)

### TFT

![qrcode](https://github.com/yoprogramo/ESP_QRcode/blob/master/src/img/tftqr.jpg?raw=true)

### EINK

![qrcode](https://github.com/yoprogramo/ESP_QRcode/blob/master/src/img/einkqr.jpg?raw=true)

### HUB75

![qrcode](https://github.com/yoprogramo/ESP_QRcode/blob/master/src/img/hub75qr.jpg?raw=true)
