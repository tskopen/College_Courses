/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 19

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 4

 * @Description: Declare a 2D array and initialize it using a doubly-nested loop that prints *

 * **************************************************************************/
import java.util.Scanner;

public class Grid {

   public static void print2DArray(char[][] array) 
   {
      for (int i = 0; i < array.length; i++) {
         for (int j = 0; j < array[i].length; j++) 
         {
            System.out.print(array[i][j] + " ");
         }
         System.out.println(); // move to next row
      }
   }
   public static void main(String[] args) {
      Scanner input = new Scanner(System.in);

      System.out.print("Enter a positive integer (n >= 1): ");
      int n = input.nextInt();

      char[][] myArray = new char[n][n];

      for (int i = 0; i < myArray.length; i++) {
         for (int j = 0; j < myArray[i].length; j++) {
            myArray[i][j] = '*';
         }
      }

      print2DArray(myArray);
   }
}