/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 18

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: March 19, 2025.

 * @Description: Add to calculate value of multiplication.

 * **************************************************************************/
import java.util.Scanner;

class Product 
{
  public static void main(String[]args)
  {
      String answer = new String("no");
      Scanner in = new Scanner(System.in);

      System.out.print("Would you like to multiply? ");
      
      answer = in.next();

      while (answer.equals("yes"))
      {
        System.out.print("Enter an Integer: ");
        int a = in.nextInt();

        System.out.print("Enter an Integer: ");
        int b = in.nextInt();

        int result = 0;
        
        // TODO: In a for cycle with i from  1 to a 
        for(int i = 1; i <= b; i++)
        {
          result += a;
        }
        System.out.println(a + " x " + b + " = " + result);

        System.out.print("Would you like to multiply? ");
        answer = in.next();
      }
  }
}