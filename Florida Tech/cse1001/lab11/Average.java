 import java.util.Scanner;

public class Average
{

  public static void main(String args[])
  {
    Scanner in = new Scanner(System.in);

     // Now we ask for a number without going to the next
     // line (using print rather than println)
     System.out.print("Enter first number : ");

     // here we declare a variable of type int with memory to
     // store the first number
     int number1;
     number1 = in.nextInt();

     // note that the above two actions could have been done on a
     // single line with
     // int number1 = in.nextInt();

     // TODO: now use System.out.print as above, to request for the
     //       value of the second number
     System.out.print("Enter second number : ");

     // here we declare a variable of type int with memory to
     // store the first number
     int number2;
     number2 = in.nextInt();


     float average = (number1 + number2)/2;
     System.out.print("Average : ");
     System.out.println(average);
  }
} 
