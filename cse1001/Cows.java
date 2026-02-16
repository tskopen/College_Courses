Simple Input, cont.
import java.util.Scanner;
public class Cows
{
  public static void main (String[] args)
  {
  int barns, cowsPer, totalCows;
  Scanner kb = new Scanner(System.in);
  System.out.print("Enter the number of barns: ");
  barns = kb.nextInt();
  System.out.print("Enter the number of cows per barn: ");
  cowsPer = kb.nextInt();
  totalCows = barns * cowsPer;
System.out.println("Total number of cows is: " + totalCows);
System.out.println("Suppose two cows per barn escape! ");
cowsPer = cowsPer – 2;
totalCows = barns * cowsPer;
System.out.println("Total number of cows is now: " + totalCows);
}
}
