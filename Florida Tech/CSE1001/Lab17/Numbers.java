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

   System.out.print("How many values: ");
  int number_values = in.nextInt();

  int[] nums = new int[number_values];
  int sum = 0;
  int product = 1;
  double sum_distances_from_mean = 0;
  System.out.print("Enter values: ");
  for(int i = 0; i < number_values; i++)
  {
   nums[i] = in.nextInt();
   sum += nums[i];
   product *= nums[i];
  }

  System.out.print("Values input were: ");
    for (int i = 0; i < number_values; i++)
    {
      System.out.print(nums[i] + " ");
    }
    double mean = (double) sum / number_values;

    for (int i = 0; i < number_values; i++)
    {
      sum_distances_from_mean += Math.abs(nums[i] - mean);
    }
    
    double avg_distances_from_mean = sum_distances_from_mean / number_values;

        // Print results
    System.out.println("Sum is: " + sum);
    System.out.println("Product is: " + product);
    System.out.println("Mean is: " + mean);
    System.out.println("Average distance from the mean: " + avg_distances_from_mean);



  }
}
