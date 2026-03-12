/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 15

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: 3/10/2026

 * @Description: Code to count a multiplcation table for a series of numbers
 * **************************************************************************/

import java.util.Scanner;

public class Multiple
{
  static public void main(String[]args)
  {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter an integer: ");
    int x = scanner.nextInt();

    System.out.print("Number of multiples: ");
    int m = scanner.nextInt();

    for (int i = 1; i <= m; i++)
    {
      System.out.println(x + " x " + i + " = " + (x * i));
    }
  }
}
