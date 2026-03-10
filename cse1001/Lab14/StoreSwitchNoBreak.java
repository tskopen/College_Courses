/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 14

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: 3/5/2026

 * @Description: Code to loop asking user to buy multiple items from a store.

 * **************************************************************************/


import java.util.Scanner;
class StoreSwitchNoBreak 
{
 public static void main(String[] args) 
{
  Scanner in = new Scanner(System.in); // Setting up scanner
  int total = 0; 
  int option = 0;
  while (option != 4)
  {       
    System.out.println("Select a product to purchase:");
    System.out.println("    1 - book $15");
    System.out.println("    2 - bag  $5");
    System.out.println("    3 - ball $10");
    System.out.println("    4 - cancel");
    System.out.print("Select an option: ");
        
    option = in.nextInt();

    switch (option) 
    {
     case 2:   total += -5;    // bag of $5
     case 3:   total += -5;    // ball of $10
     case 1:   total += 15;    // book of $15
       break;
     case 4:
       break;
     default:
       System.out.println("Unknown product");
       System.exit(0);
    }
  }
  System.out.println("Your total is: $" + total);
  in.close(); // Close scanner when done using it
 }
}
