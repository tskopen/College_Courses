/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 16

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: March 12th 2026

 * @Description: Show calculated factorial

 * **************************************************************************/

import java.util.Scanner;
class Factorial
{
static public void main(String[]args)
{
  Scanner keyboard = new Scanner(System.in);

  System.out.print("Enter N: ");
  int n = keyboard.nextInt();

  int sum = 1;

  for(int i = 1; i <= n; i++)
  {
    sum = sum * i;
  }
  if (sum % 2 == 0)
  {
    System.out.println(n + " is " + sum + ", which is even.");
  }
  else
  {
    System.out.println(n + " is " + sum + ", which is odd.");
  }
}
}
