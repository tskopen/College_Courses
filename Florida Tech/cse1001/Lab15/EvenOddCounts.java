/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 15

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: 3/10/2026

 * @Description: Code to detect even and odd numbers and count them
 * **************************************************************************/



import java.util.Scanner;

public class Odd
{
  static public void main(String[]args)
  {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter a number: ");

    int x = scanner.nextInt();
    int totalOdd = 0;
    int totalEven = 0;
    while (x != -1)
    	{
	if (x % 2 == 1)
    	{
    	  System.out.println("Number " + x + " is odd");
    	  totalOdd++;
	} 
    	else
    	{
    	  System.out.println("Number " + x + " is even");
	  totalEven++;
	}
        System.out.print("Enter a number: ");
	x = scanner.nextInt();
    } 
    System.out.println("Total number of even numbers: " + totalEven);
    System.out.println("Total number of odd numbers: " + totalOdd);
  }
}
