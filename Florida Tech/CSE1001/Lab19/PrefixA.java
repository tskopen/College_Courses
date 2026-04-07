/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 19

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 4

 * @Description: Validate if an array is the prefix to a larger set.

 * **************************************************************************/
import java.util.Scanner;

public class PrefixA {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int length1, length2;
        int[] firstArray, secondArray;

        System.out.print("Enter first list length: ");
        length1 = scanner.nextInt();

        firstArray = new int[length1];

        System.out.print("Enter the first list: ");
        for (int i = 0; i < length1; i++) 
        {
            firstArray[i] = scanner.nextInt();
        }

        System.out.print("Enter second list length: ");
        length2 = scanner.nextInt();

        secondArray = new int[length2];

        System.out.print("Enter the second list: ");
        for (int i = 0; i < length2; i++) 
        {
            secondArray[i] = scanner.nextInt();
        }

        for (int i = 0; i < Math.min(length1, length2); i++) 
        {
            if (firstArray[i] != secondArray[i]) 
            {
                System.out.println("The second list is not a prefix of the first");
                return;
            }
        }

        if (length2 <= length1) 
        {
            System.out.println("The second list is a prefix of the first");
        } 
        else 
        {
            System.out.println("The second list is not a prefix of the first");
        }
    }
}