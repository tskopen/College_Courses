/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 19

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 4

 * @Description: Prompt the user for the number of lottery tickets that they would like to purchase and display the numbers assiocated.

 * **************************************************************************/
import java.util.Scanner;

public class Lottery1 {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        int ticketsNumber;
        int[][] tickets;

        System.out.print("Enter number of tickets: ");
        ticketsNumber = scanner.nextInt();

        tickets = new int[ticketsNumber][5];

        for (int i = 0; i < ticketsNumber; i++) 
        {
            System.out.print("Enter ticket #" + (i + 1) + " (5 numbers, range 1 - 99): ");
            
            for (int j = 0; j < 5; j++) 
            {
                tickets[i][j] = scanner.nextInt();
            }
        }

        System.out.println("Your tickets are:");
        for (int i = 0; i < ticketsNumber; i++) {
            System.out.print("Ticket " + (i + 1) + ": ");
            
            for (int j = 0; j < 5; j++) 
            {
                System.out.print(tickets[i][j] + " ");
            }
            System.out.println();
        }

        int totalCost = ticketsNumber * 2;
        System.out.println("Total cost: $" + totalCost);
    }
}