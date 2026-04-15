/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 23

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 14

 * @Description: print out image
 * **************************************************************************/

import java.io.IOException;
class ImagePixelByPixel {

 static int rgb(int r, int g, int b) {return r*65536 + g*256 + b;} 

 // Sample code to create an 4x6 image pixel by pixel.
 static public void main (String args[]) throws IOException {
 final int BLUE  = rgb(0,0,255);
 final int GREEN = rgb(0,255,0);
 final int RED = rgb(255, 0, 0);
 final int WHITE = rgb(255, 255, 255);

 int color[][] =
  {
   {0,      BLUE,  0, BLUE,  0},         // Black, Blue,  Black, Black, Blue,  Black
   {RED,   WHITE, WHITE, WHITE, RED},      // Blue,  Black, Black, Black, Black, Blue
   {GREEN,  0,     0,  0,     GREEN},     // Green, Black, Black, Black, Black, Green
   {0,      GREEN, 0, GREEN, 0}          // Black, Green, Black, Black, Green, Black
  };
  BitmapSaver.writeImage("circle.bmp", color);
 }
}
