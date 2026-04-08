
/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 18

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: March 19, 2025.

 * @Description: print out pattern n * 2 - 1

 * **************************************************************************/
import java.util.Scanner;

class FactorFor 
{
  public static void main(String[]args)
  {
    Scanner in = new Scanner(System.in);

    System.out.print("Enter n: ");

    int n = in.nextInt();

    int max = n * 2 - 1;
    // TODO: In a for cycle, "for" row from 1 to n
    int i = max;
    while(i >= 1)
    {
        int j = i;
        while(j >= 1)
        {
            System.out.print(j + " ");
            j -= 2;
        }
        i -= 2;
        System.out.println();
    }
        // TODO: print col

  }
}
