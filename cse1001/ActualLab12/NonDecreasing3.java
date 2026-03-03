import java.util.Scanner;
class NonDecreasing3 
{
  public static void main(String[] args) 
  {
    Scanner scanner = new Scanner(System.in);
    //TODO: here declare a variable of type Scanner called scanner and
    // initialized with new Scanner(System.in);
    System.out.print("Input first integer: ");
    int first = scanner.nextInt();
    System.out.print("Input second integer: ");
    int second = scanner.nextInt();
    System.out.print("Input third integer: ");
    int third = scanner.nextInt();

   if ( (first > second) || (second > third))
   {
     System.out.println("The integers are in non-decreasing order.");
   }
   else
   {
     System.out.println("The integers are in decreasing order.");
   }
 }
}
