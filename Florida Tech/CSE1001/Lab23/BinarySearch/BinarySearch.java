/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 23

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 14

 * @Description: Implement and print binary search
 * **************************************************************************/

import java.util.Scanner;

public class BinarySearch {

    public static int binarySearch(int[] a, int needle) 
    {
        int low = 0;
        int high = a.length - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            printBinarySearchStatus(a, low, mid, high);

            if (a[mid] == needle) 
            {
                return mid;
            } 
            else if (a[mid] < needle) 
            {
                low = mid + 1;
            } 
            else 
            {
                high = mid - 1;
            }
        }

        return -1;
    }

    static void printBinarySearchStatus(int[] array, int low, int mid, int high) 
    {
        System.out.printf("low=%2d  mid[%2d]=%2d  high=%2d\n", low, mid, array[mid], high);
    }

    public static void main(String[] args) 
    {

        int[] haystack = {
            2,4,5,7,10,12,14,18,21,23,25,26,
            29,30,32,35,45,51,56,62,64,66,79,80,83
        };

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number you search for: ");
        int needle = scanner.nextInt();

        int position = binarySearch(haystack, needle);

        if (position >= 0) 
        {
            System.out.println("Found: " + position);
        } 
        else 
        {
            System.out.println("Value does not appear in the array");
        }

        scanner.close();
    }
}