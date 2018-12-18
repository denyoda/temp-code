#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel matrix = Adafruit_NeoPixel(200, 7, NEO_GRB + NEO_KHZ800);
//int i=0; //set i as 0
int d=1; //set d as 0

void setup() {
  // put your stup code here, to run once:
  matrix.begin();
  matrix.show();  // initialize all pixels to off
}

void loop() {
  // put your main code here, to run repeatedly:
  uint32_t c;
  
  for( int i = 0; i < 100; i += 10) {
    
  c = matrix.Color(250, 80,0);
  matrix.setPixelColor(i, c);
  matrix.show();
  delay(100);
  c = matrix.Color(0,0,0);
  matrix.setPixelColor(i , c);
  matrix.show();

 delay(100);
  i=i+d;
//  if(i>100)d=-1;
//  if(i<0)d=+1;
  
  }
}
