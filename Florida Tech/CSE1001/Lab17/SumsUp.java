/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 17

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: March 17 2026

 * @Description: Check if any two int add up and equal the other

 * **************************************************************************/

import java.util.Scanner;

public class SumsUp
{
  public static void main(String[]args)
  {
   Scanner in = new Scanner(System.in);
   System.out.println("Enter three integers:");
  
   int x = in.nextInt();
   int y = in.nextInt();
   int z = in.nextInt();
   if (x+y == z) 
   {
     System.out.println("yes");
   } 
   else if (x+z==y) 
   {
     System.out.println("yes");
   }
   else if (y+z==x) 
   {
     System.out.println("yes");
   } 
   else
   {
     System.out.println("no");
   }
  }
}
