import java.util.Scanner;
import java.lang.System;

public class FirstProgram
  {
    public static void main(String[] args)
    {
    int n1, n2;
    Scanner keyboard = new Scanner(System.in);

    System.out.println("Enter an integer:");
    n1 = keyboard.nextInt();

    System.out.println("Enter another interger:");
    n2 = keyboard.nextInt();

    System.out.println("The sum is:");
    System.out.println(n1 + n2);
    }
  }
