
public class AnimatedDrawStatic {
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
  switch(args[0])
 {
  case("bored"):
  drawStraightMouthFace();  // draw Frame 1 in canvas
  StdDraw.pause(10000);      // Another function to access Thread.sleep()

  break;
  case("happy"):
  drawCurvedMouthFace();    // Frame 2 in canvas
  StdDraw.pause(10000);      // Another function to access Thread.sleep()
  break;  
} 
 StdDraw.clear();   

}
}
