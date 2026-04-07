/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 19

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 4

 * @Description: Compare two arrays and check if there equal.
 * **************************************************************************/

import java.util.Scanner;

public class ArrayEquals {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        int[] firstArray;

        System.out.print("Enter list length: ");
        int length = scanner.nextInt();

        firstArray = new int[length];

        System.out.print("Enter the first list: ");
        for (int i = 0; i < length; i++) 
        {
            firstArray[i] = scanner.nextInt();
        }

        System.out.print("Enter the second list: ");

        boolean different = false;

        for (int i = 0; i < length; i++) 
        {
            int crt_value = scanner.nextInt();

            if (crt_value != firstArray[i]) 
            {
                different = true;
            }
        }

        if (!different) 
        {
            System.out.println("The lists are equal");
        } else 
        {
            System.out.println("The lists are not equal");
        }
    }
}