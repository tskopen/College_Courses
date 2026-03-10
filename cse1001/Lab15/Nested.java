/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 15

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: 3/10/2026

 * @Description: Code to draw Pattern B
 * **************************************************************************/


class Nested
{
  public static void main(String[]args)
  {
    for (int line = 1; line <= 5; line ++)
    {
      for (int col = col_start(line); col >= col_end(line); col --)
      {
        System.out.print(col + " ");
      }
      System.out.println();
    }
  }
}
