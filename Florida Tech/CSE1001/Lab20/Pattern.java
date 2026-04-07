/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 19

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 4

 * @Description: Declare a 2D array and initialize it using a doubly-nested loop that prints 0 and - depending on the index's value (even or odd)

 * **************************************************************************/
import java.util.Scanner;

public class Pattern {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter n: ");
        int n = input.nextInt();

        char[][] pattern = new char[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((i + j) % 2 == 1) {
                    pattern[i][j] = '0';
                } else {
                    pattern[i][j] = '-';
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(pattern[i][j]);
            }
            System.out.println();
        }
    }
}