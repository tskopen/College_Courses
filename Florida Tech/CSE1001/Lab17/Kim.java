/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 17

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: March 17 2026

 * @Description: Check if its kims birthday and her respective fine.

 * **************************************************************************/

import java.util.Scanner;

public class Kim {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        // Prompt for speed and birthday
        System.out.print("Enter Kim's speed: ");
        int speed = in.nextInt();

        System.out.print("Is it her birthday? (0 = No, 1 = Yes): ");
        int birthday = in.nextInt();

        // If it is her birthday, add 5 to speed for ticket calculation
        int effectiveSpeed = speed;
        if (birthday == 1) 
        {
            effectiveSpeed -= 5; // subtract 5 to make it "effectively lower"
        }

        // Determine fine
        if (effectiveSpeed <= 60) 
        {
            System.out.println("no ticket");
        } 
        else if (effectiveSpeed <= 80) 
        {
            System.out.println("$100");
        } 
        else 
        {
            System.out.println("$200");
        }

    }
}
