/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 19

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 4

 * @Description: Declare a 2D array and scroll through its values

 * **************************************************************************/
import java.util.Scanner;

public class Scroll {
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int rows = input.nextInt();
        System.out.print("Enter number of cols: ");
        int cols = input.nextInt();

        int[][] myArray = new int[rows][cols];

        for (int i = 0; i < rows; i++) 
        {
            System.out.print("Enter row " + i + ": ");
            for (int j = 0; j < cols; j++) 
            {
                myArray[i][j] = input.nextInt();
            }
        }

        System.out.println("The input array is:");
        print2DInt(myArray);

        scroll(myArray);

        System.out.println("The scrolled array is:");
        print2DInt(myArray);
    }

    public static void print2DInt(int[][] array) 
    {
        for (int i = 0; i < array.length; i++) 
        {
            for (int j = 0; j < array[i].length; j++) 
            {
                System.out.printf("%4d", array[i][j]);
            }
            System.out.println();
        }
    }

    public static void scroll(int[][] array) 
    {
        for (int i = 0; i < array.length; i++) 
        {
            int temp = array[i][array[i].length - 1];

            for (int j = array[i].length - 1; j >= 1; j--) 
            {
                array[i][j] = array[i][j - 1];
            }

            array[i][0] = temp;
        }
    }
}