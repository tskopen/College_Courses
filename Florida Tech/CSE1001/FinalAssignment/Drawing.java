import java.awt.Font;
import java.io.IOException;
import java.util.*;

class Drawing 
{
   static Random random = new Random();


   static int CANVAS_WIDTH = 300; // Max ROWS in pixels
   static int CANVAS_HEIGHT = 300; // Max COLS in pixels

   static int rgb(int r, int g, int b) {return r*65536 + g*256 + b;} 

   static int lerp(int setPoint, int target, int direction) 
   {
      double t = direction / (double) CANVAS_HEIGHT;
      return (int)(((1 - t) * setPoint) + (t * target));
   }

   // Helper method to draw a square pixel at position x,y
   static void pixel(int x, int y) 
   {
      if (x >= 0 && y >= 0 && x < CANVAS_WIDTH && y < CANVAS_HEIGHT)
      {
         StdDraw.filledSquare(x, y, 1.1);
      }
   }

   static void drawBackground()
   {
      for(int i = 0; i < CANVAS_HEIGHT; i++)
      {
               int r = lerp(246, 164, i);
               int g = lerp(178, 194, i);
               int b = lerp(107, 244, i);

               StdDraw.setPenColor(r, g, b);
               StdDraw.setPenRadius(0.1);
               StdDraw.line(0, i - 1, CANVAS_WIDTH, i);
      }
   }

   public static void main (String[]args) 
   {
      StdDraw.setXscale(0, CANVAS_WIDTH);
      StdDraw.setYscale(0, CANVAS_HEIGHT);


      drawBackground();

      StdDraw.setPenColor(170, 170, 170);
      double[] mountainOutlineX = {0, 100, 300, 300, 300};
      double[] mountainOutlineY = {0, 100, 30, 0, 0};
      StdDraw.filledPolygon​(mountainOutlineX, mountainOutlineY);

      StdDraw.setPenColor(170, 170, 170);
      mountainOutlineX = new double[] {150, 150, 190};
      mountainOutlineY = new double[] {120, 150, 100};
      StdDraw.filledPolygon​(mountainOutlineX, mountainOutlineY);

      StdDraw.setPenColor(150, 150, 150);
      mountainOutlineX = new double[] {0, 0, 150, 160, 300};
      mountainOutlineY = new double[] {0, 200, 150, 130, 0};
      StdDraw.filledPolygon​(mountainOutlineX, mountainOutlineY);

      StdDraw.setPenColor(130, 130, 130);
      mountainOutlineX = new double[] {0, 0, 160, 250};
      mountainOutlineY = new double[] {0, 100, 130, 0}; 
      StdDraw.filledPolygon​(mountainOutlineX, mountainOutlineY);


      // right mountain
      StdDraw.setPenColor(170, 170, 170);
      mountainOutlineX = new double[] {0, 0, 100, 150, 300};
      mountainOutlineY = new double[] {0, 200, 100, 10, 2};
      StdDraw.filledPolygon​(mountainOutlineX, mountainOutlineY);

      StdDraw.setPenColor(160, 160, 160);
      mountainOutlineX = new double[] {0, 0, 70, 120};
      mountainOutlineY = new double[] {0, 200, 70, 5};
      StdDraw.filledPolygon​(mountainOutlineX, mountainOutlineY);

      StdDraw.setPenColor(150, 150, 150);
      mountainOutlineX = new double[] {0, 0, 70, 120};
      mountainOutlineY = new double[] {0, 50, 70, 5};
      StdDraw.filledPolygon​(mountainOutlineX, mountainOutlineY);

   }
}