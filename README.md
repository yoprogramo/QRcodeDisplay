# QRcodeDisplay

This is a rework of the library ESP QRcode (https://github.com/yoprogramo/ESP_QRcode) to make it more flexible and be capable to include more
displays sharing the same base code.  

You should use, at least one of the subclasses (this file will be populated with the references) to be able to display some QR, choose the corresponding to
the hardware you have available.

Each subclass have its own repository with its own dependencies. This library have not dependencies. Depending the dependencies you can choose one of the following approved subclasses, please visit the links to see the dependencies and hardware support:

* QRcodeOled: https://github.com/yoprogramo/QRcodeOled
* QRcode_ST7735: https://github.com/yoprogramo/QRcode_ST7735
* QRcode_ST7789: https://github.com/yoprogramo/QRcode_ST7789
* QRcode_eSPI: https://github.com/yoprogramo/QRcode_eSPI
* QRcodeEink: https://github.com/yoprogramo/QRcodeEink

If you do not find match for your display model feel free to contribute with a new subclasss or file an Issue here.

## Examples

### Oled

![qrcode](https://github.com/yoprogramo/ESP_QRcode/blob/master/src/img/qrcode.JPG?raw=true)

### TFT

![qrcode](https://github.com/yoprogramo/ESP_QRcode/blob/master/src/img/tftqr.jpg?raw=true)

### EINK

![qrcode](https://github.com/yoprogramo/ESP_QRcode/blob/master/src/img/einkqr.jpg?raw=true)
