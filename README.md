# QRcodeDisplay

This is a rework of the library ESP QRcode (https://github.com/yoprogramo/ESP_QRcode) to make it more flexible and be capable to include more
displays sharing the same base code.  

You should use, at least one of the subclasses (this file will be populated with the references) to be able to display some QR, choose the corresponding to
the hardware you have available.

Each subclass have its own repository with its own dependencies. This library have not dependencies.

The following examples has been generated using different subclasses:


## OLED example

* QRcodeOled: https://github.com/yoprogramo/QRcodeOled

![qrcode](https://github.com/yoprogramo/ESP_QRcode/blob/master/src/img/qrcode.JPG?raw=true)

## TFT example

* QRcode_ST7735: https://github.com/yoprogramo/QRcode_ST7735
* QRcode_ST7789: https://github.com/yoprogramo/QRcode_ST7789

![qrcode](https://github.com/yoprogramo/ESP_QRcode/blob/master/src/img/tftqr.jpg?raw=true)

## EINK Example

* QRcodeEink: https://github.com/yoprogramo/QRcodeEink

![qrcode](https://github.com/yoprogramo/ESP_QRcode/blob/master/src/img/einkqr.jpg?raw=true)
