/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 15

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: 3/10/2026

 * @Description: Code to detect even and odd numbers
 * **************************************************************************/



import java.util.Scanner;

public class Even
{
  static public void main(String[]args)
  {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter a number: ");

    int x = scanner.nextInt();
    if (x % 2 == 1)
    {
    System.out.println("Number " + x + " is odd");
    } 
    else
    {
    System.out.println("Number " + x + " is even");
    } 
  }
}
