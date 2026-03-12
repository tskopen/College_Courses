/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 15

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: 3/10/2026

 * @Description: Code to draw a smiley face with a for loop

 * **************************************************************************/


public class AnimatedDoubleBuffered {
 static void drawStraightMouthFace() {
  StdDraw.setPenRadius(0.05); // set drawing brush size to 5% of the side of the drawing area
  StdDraw.setPenColor(StdDraw.BLUE);
  StdDraw.point(0.5, 0.5); // nose: code to place a point at (0.5,0.5), i.e., x=0.5 and y=0.5
  StdDraw.setPenColor(StdDraw.MAGENTA);
  StdDraw.line(0.2, 0.2, 0.8, 0.2); // mouth: code to place a line from (0.2,0.2) to (0.8,0.2)

  StdDraw.ellipse(0.2, 0.8, 0.1, 0.03); // draw ellipses for an eye with center (0.2,0.8) and axes 0.1, 0.03
  StdDraw.ellipse(0.8, 0.8, 0.1, 0.03); // 2nd eye
 }

 static void drawCurvedMouthFace() {
  // Here insert again your full drawing code for curved mouth, the body of main in SmilierDraw.java
  StdDraw.setPenRadius(0.05); // set drawing brush size to 5% of the side of the drawing area
  StdDraw.setPenColor(StdDraw.BLUE);
  StdDraw.point(0.5, 0.5); // nose: code to place a point at (0.5,0.5), i.e., x=0.5 and y=0.5
  StdDraw.setPenColor(StdDraw.MAGENTA);
  StdDraw.line(0.3, 0.2, 0.7, 0.2); // mouth: code to place a __ line from (0.3,0.2) to (0.7,0.2)
  StdDraw.line(0.2, 0.3, 0.3, 0.2); // mouth corner left: code to place a \ line from (0.2,0.3) to (0.3,0.2)
  StdDraw.line(0.7, 0.2, 0.8, 0.3); // mouth corner right: code to place a / line from (0.7,0.2) to (0.8,0.3)

  StdDraw.ellipse(0.2, 0.8, 0.1, 0.03); // draw ellipses for an eye with center (0.2,0.8) and axes 0.1, 0.03
  StdDraw.ellipse(0.8, 0.8, 0.1, 0.03);
 }

 public static void main(String[] args) {
  StdDraw.enableDoubleBuffering(); // allocate two canvases and set focus to the hidden one
  for (int i = 0; i < Integer.parseInt(args[0]); i ++) {  
    StdDraw.clear();          // clear canvas
    drawStraightMouthFace();  // draw Frame 1 in hidden canvas
    StdDraw.show();           // flip hidden with visible canvas
    StdDraw.pause(1000);      // Another function to access Thread.sleep()

    StdDraw.clear();          // clear canvas

    drawCurvedMouthFace(); // Frame 2 in hidden canvas
    StdDraw.show();
    StdDraw.pause(1000);      // Another function to access Thread.sleep()
  }
 }
}
