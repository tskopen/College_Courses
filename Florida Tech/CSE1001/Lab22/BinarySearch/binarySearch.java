/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 19

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 9

 * @Description:  Use a binary search function to serach and array and output the steps

 * **************************************************************************/

import java.util.Scanner;
class binarySearch
{
   static void printBinarySearchStatus(int[] array, int low, int mid, int high) 
   {
      System.out.printf("low=%2d  mid[%2d]=%2d  high=%2d\n", low, mid, array[mid], high);
   }

   public static int binarySearch(int[] a, int x) 
   {

      int low;
      int high;
      int mid;

      low = 0;
      high = a.length-1;

      while (low <= high) 
      {
         mid = (low + high)/2;

         if (a[mid] == x)
            return mid;
         else if (x < a[mid])
            high = mid-1;
         else
            low = mid+1;

         printBinarySearchStatus(a, low, mid, high);
      }

      return -1;
   }



   public static void main(String[] pars) 
   {
      System.out.print("Enter the number you search for: ");
      Scanner scanner = new Scanner(System.in);
      int n;
      int[] haystack = {2,4,5,7,10,12,14,18,21,23,25,26,29,30,32,35,45,51,56,62,64,66,79,80,83};

      // prompt the user for n
      // Allocate array b
      // Input values into b
      // Sort b, if necessary 
      int needle = scanner.nextInt();
      int position = binarySearch(haystack, needle);
      
      if (position >= 0)
         System.out.println("Found: " + position);
      else
         System.out.println("Value does not appear in the array");

   }
}
