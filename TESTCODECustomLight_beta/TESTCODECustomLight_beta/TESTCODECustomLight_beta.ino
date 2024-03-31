#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 2

#define DATA_PIN 4

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
}

void loop() {
  // Turn the LED on, then pause
  leds[0].r = 0; //r
  leds[0].g = 0;  //g
  leds[0].b = 0;   //b
  leds[1].r = 0; //w
  leds[1].g = 0; //p
  leds[1].b = 255; //amber
  leds[2].r = 0; //r
  leds[2].g = 0;  //g
  leds[2].b = 0;   //b
  leds[3].r = 0; //w
  leds[3].g = 0; //p
  leds[3].b = 255; //amber

  FastLED.show();
}
