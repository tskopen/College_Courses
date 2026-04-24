import java.util.Scanner;
class Multiply {
 public static void main(String[] args)
 {
  Scanner kb = new Scanner(System.in);

  System.out.println("Enter the first number");
  double x = kb.nextDouble();

  System.out.println("Enter the Second number");
  double y = kb.nextDouble();
  double mult = x * y;

 System.out.println(mult);
 }
}
