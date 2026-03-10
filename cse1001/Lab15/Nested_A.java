/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 15

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: 3/10/2026

 * @Description: Code to draw  Pattern A
 * **************************************************************************/

class Nested_A {
 public static void main (String[]args) {
  for (int line = 1; line <= 5; line ++) {
   for (int col = 2*line - 1; col >= line; col--) 
   {
     System.out.print(col + " ");
   }
   System.out.println();
  }
 }
}
