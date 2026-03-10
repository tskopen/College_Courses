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
  int amount;
  Scanner kb = new Scanner(System.in);
  System.out.print("Enter an integer: ");

  amount = kb.nextInt();
  // Here one could have already printed the original amount
  System.out.println(amount + " cents in coins is: ");

  System.out.println(amount/25 + " quarters");
  
  amount = amount%25; // Extract the quarters
  System.out.println(amount/10 + " dimes");

  amount = amount%10; // Extract the dimes
  System.out.println(amount/5 + " nickles");

  System.out.println(amount%5 + " pennies ");
 }
} 
