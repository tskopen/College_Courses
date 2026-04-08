/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 19

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 4

 * @Description: Declare a 2D array and then perform various conditional operators on it

 * **************************************************************************/
import java.util.*;

public class AndOr {

    public static void print2DBoolean(boolean[][] array) 
    {
        for (int i = 0; i < array.length; i++) {          
            for (int j = 0; j < array[i].length; j++) 
            {    
                System.out.print(array[i][j] ? '1' : '0');
            }
            System.out.println(); 
        }
    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        Random random = new Random();

        // Prompt user for n and m
        System.out.print("Enter n: ");
        int n = sc.nextInt();
        System.out.print("Enter m: ");
        int m = sc.nextInt();

        boolean[][] array1 = new boolean[n][m];
        boolean[][] array2 = new boolean[n][m];
        boolean[][] andArray = new boolean[n][m];
        boolean[][] orArray = new boolean[n][m];
        boolean[][] notArray1 = new boolean[n][m];

        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                array1[i][j] = random.nextBoolean();
                array2[i][j] = random.nextBoolean();
            }
        }

        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                andArray[i][j] = array1[i][j] && array2[i][j];
                orArray[i][j] = array1[i][j] || array2[i][j];
                notArray1[i][j] = !array1[i][j]; 
            }
        }

        System.out.println("First 2D Array:");
        print2DBoolean(array1);

        System.out.println("Second 2D Array:");
        print2DBoolean(array2);

        System.out.println("And of the Arrays:");
        print2DBoolean(andArray);

        System.out.println("Or of the Arrays:");
        print2DBoolean(orArray);

        System.out.println("Not of First Array:");
        print2DBoolean(notArray1);

    }
}