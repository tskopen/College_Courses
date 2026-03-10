/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 14

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: 3/5/2026

 * @Description: Code to calcucate roaches needed to fill a space

 * **************************************************************************/


import java.util.Scanner;
class Roaches 
{
 public static void main(String[] args) 
  {
  Scanner keyboard = new Scanner(System.in);

  final double GROWTH_RATE = 0.95; final double ONE_BUG_VOLUME = 0.002;

  double houseVolume, population, totalBugVolume;

  System.out.print("Enter total house volume (cubic feet):");
  houseVolume = keyboard.nextDouble();
  System.out.print("Enter initial number of roaches:");
  population = keyboard.nextDouble();

  System.out.println();
  System.out.println("House volume:" + houseVolume + " cubic feet");
  System.out.println("Initial population:" + population);
  System.out.println();

  int countWeeks = 0;
  totalBugVolume = population * ONE_BUG_VOLUME;  // logically this is initialization of the cycle

  for( countWeeks = 0; totalBugVolume < houseVolume; countWeeks ++, totalBugVolume = population * ONE_BUG_VOLUME)
  {        // this contain the test of the termination
   countWeeks = countWeeks + 1;
   population = population + (GROWTH_RATE * population);
   totalBugVolume = population * ONE_BUG_VOLUME; // logically this is update of the termination value
  }

  System.out.println("The house will be filled in " + countWeeks + " weeks.");
  System.out.println("There will be " + (int)population + " roaches.");
  System.out.println("They will fill " + totalBugVolume + " cubic feet.");
 }
}

