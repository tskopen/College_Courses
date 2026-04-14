/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 23

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 14

 * @Description: print out galaxy
 * **************************************************************************/

import java.io.IOException;
import java.util.*;

class ImageProgrammatically {
  static Random random = new Random();

 static int rgb(int r, int g, int b) {return r*65536 + g*256 + b;} 

 // Sample code to create an 4x6 image pixel by pixel.
 static public void main (String args[]) throws IOException {


  int[][] color = new int[100][100];

  for(int i = 0; i < 100; i ++)
  {
        for(int j = 0; j < 100; j ++)
        {
          int saturation = random.nextInt(255) + 1;
          int r = random.nextInt(256) / saturation;
          int g = random.nextInt(256) / saturation;
          int b = random.nextInt(256) / saturation;

          color[i][j] = rgb(r, g, b);
        }
  }

  BitmapSaver.writeImage("100.bmp", color);
 }
}
