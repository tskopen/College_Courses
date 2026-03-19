/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 18

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: March 19, 2025.

 * @Description: Find factors of multitudes

 * **************************************************************************/
import java.util.Scanner;

class FactorFor 
{
  public static void main(String[]args)
  {
    Scanner in = new Scanner(System.in);

    System.out.print("Enter an Integer: ");

    int number = in.nextInt();

    System.out.println("Factors of 225 are: ");

    for(int i = 1; i <= 255; i++)
    {
      if((number % i) == 0)
      {
        System.out.println(i);
      }
    }
  }
}
