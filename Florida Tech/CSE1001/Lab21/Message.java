/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab:  21

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 7th

 * @Description:  Basic program to display a message n times according to user input

 * **************************************************************************/


import java.util.Scanner;

public class Message
{
    public static void outputMessage(String message, int n)
    {
        for (int i = 0; i < n; i++)
        {
            System.out.println(message);
        }
    }
    public static void main(String[]args)
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter message: ");

        String message = scanner.nextLine();

        System.out.print("Enter n: ");

        int n = scanner.nextInt();

        outputMessage(message, n);


        
    }

}
