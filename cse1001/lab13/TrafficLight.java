/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 13

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: March 3th

 * @Description: Instructions based on traffic light

 * **************************************************************************/


import java.util.Scanner;
class TrafficLight {
 static public void main (String args[]) {
   //TODO: declare a Scanner named "in"
   Scanner in = new Scanner(System.in);
   //TODO: request for a light color with System.out.print()
   System.out.println("Enter light color: ");
   String color = in.nextLine();

 
   //TODO: declare String variable "color" and read it with in.next()

   // implementing a switch statement with cases for various values of variable "color"
   switch (color)
   {
     case "red":
        System.out.println("Stop");
        break;

     case "green":
          //TODO: continue with case entries for green, then write a case for yellow
        System.out.println("Go");
        break;
     default:
       //TODO: here you write the code for no match
        System.out.println("Unknown");
   }
 }
}
