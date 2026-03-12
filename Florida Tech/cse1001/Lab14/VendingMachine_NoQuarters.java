/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 14

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: 3/5/2026

 * @Description: Code calcluate change output

 * **************************************************************************/

import java.util.Scanner;
public class VendingMachine 
{
 public static void main(String[] args) 
 {
  int amount, quarters, dimes, nickels, pennies;
  Scanner kb = new Scanner(System.in);
  System.out.print("Enter an integer: ");

  amount = kb.nextInt();
  // Here one could have already printed the original amount
  System.out.println(amount + " cents in coins is: ");

  System.out.println(amount/25 + " quarters");
  amount = amount%25; // Extract the quarters
  dimes = amount/10; // Determine the number of dimes
  amount = amount%10; // Extract the dimes
  nickels = amount/5; // Determine the number of nickles
  pennies = amount%5; // Extract the nickles; leftover is pennies

  System.out.println(dimes + " dimes");
  System.out.println(nickels + " nickles");
  System.out.println(pennies + " pennies ");
 }
} 
