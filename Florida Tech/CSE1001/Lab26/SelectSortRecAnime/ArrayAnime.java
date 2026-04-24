import java.awt.Font;
import java.awt.Color;
public class ArrayAnime {
 // initialize a canvas with double buffering and Arial text font
 public static void initCanvas(int fontSize) {
  Font font = new Font("Arial", Font.BOLD, fontSize);
  StdDraw.setFont(font);
  StdDraw.enableDoubleBuffering(); // allocate two canvases and set focus to the hidden one
 }

 // Method drawing the current array,
 // in a swap x<-->y,
 // highlighting swapped positions
 public static void draw(int[]a, int temp, int x, int y, Color ctemp, Color cx, Color cy ) {
  StdDraw.clear();      // clear hidden canvas
  StdDraw.setPenColor(ctemp);
  if( temp >=0 ) StdDraw.text( 0.5, 0.66, ""+temp);
  for ( int i = 0; i < a.length; i ++ ) {
    if (i < x) StdDraw.setPenColor(0,0,0);
    else StdDraw.setPenColor(StdDraw.MAGENTA);
    if (i == x) StdDraw.setPenColor(cx);
    if (i == y) StdDraw.setPenColor(cy);
    StdDraw.text((i+0.5)*1.0/a.length, 0.33, ""+a[i]);
  }
  StdDraw.show();      // Hide current canvas, Bring previously hidden canvas to front
  StdDraw.pause(2000); // Another function to access Thread.sleep()
 }

 // Animated swap i <--> minPos, via a "temp" variable with 3 colors
 public static void swap(int[]a, int i, int minPos) {
   draw(a, -1, i, minPos, StdDraw.BLACK, StdDraw.RED, StdDraw.BLUE);
   int temp = a[i];
   draw(a, temp, i, minPos, StdDraw.RED, StdDraw.GREEN, StdDraw.BLUE);
   a[i] = a[minPos];
   draw(a, temp, i, minPos, StdDraw.RED, StdDraw.BLUE, StdDraw.GREEN);
   a[minPos] = temp;  
   draw(a, temp, i, minPos, StdDraw.GREEN, StdDraw.BLUE, StdDraw.RED);
 }
}

