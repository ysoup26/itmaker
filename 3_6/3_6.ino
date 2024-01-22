

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel RGB_LED = Adafruit_NeoPixel(8, 3, NEO_GRB);

void setup() {
  RGB_LED.begin();
  RGB_LED.setBrightness(50);
  RGB_LED.clear();
}

void loop() {
  RGB_LED.setPixelColor(0, RGB_LED.Color(255, 0, 0));
  RGB_LED.setPixelColor(1, RGB_LED.Color(255, 100, 0));
  RGB_LED.setPixelColor(2, RGB_LED.Color(255, 255, 0));
  RGB_LED.setPixelColor(3, RGB_LED.Color(0, 255, 0));
  RGB_LED.setPixelColor(4, RGB_LED.Color(0, 255, 100));
  RGB_LED.setPixelColor(5, RGB_LED.Color(0, 0, 255));
  RGB_LED.setPixelColor(6, RGB_LED.Color(100, 0, 255));
  RGB_LED.setPixelColor(7, RGB_LED.Color(255, 0, 255));
  RGB_LED.show();
}
