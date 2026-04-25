import java.awt.Font;
import java.io.IOException;
import java.util.*;
class Drawing {
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
    for(int i = 0; i < CANVAS_HEIGHT; i = i + 2)
    {
            int r = lerp(246, 164, i);
            int g = lerp(178, 194, i);
            int b = lerp(107, 244, i);

            StdDraw.setPenColor(r, g, b);
            for(int j = 0; j < CANVAS_WIDTH; j = j + 2)
            {
                pixel(j, i);
            }
    }
 }

 public static void main (String[]args) 
 {
    StdDraw.setXscale(0, CANVAS_WIDTH);
    StdDraw.setYscale(0, CANVAS_HEIGHT);


    drawBackground();

    StdDraw.setPenColor(130, 130, 130);

    double[] mountainOutlineX = {0, 100, 300, 300, 300};
    double[] mountainOutlineY = {0, 100, 30, 0, 0};
    StdDraw.filledPolygon​(mountainOutlineX, mountainOutlineY);


    StdDraw.setPenColor(150, 150, 150);
    mountainOutlineX = new double[] {0, 0, 150, 160, 300};
    mountainOutlineY = new double[] {0, 200, 150, 130, 0};
    StdDraw.filledPolygon​(mountainOutlineX, mountainOutlineY);


    StdDraw.setPenColor(170, 170, 170);
    mountainOutlineX = new double[] {0, 0, 100, 150, 300};
    mountainOutlineY = new double[] {0, 200, 100, 10, 2};
    StdDraw.filledPolygon​(mountainOutlineX, mountainOutlineY);
 }
}