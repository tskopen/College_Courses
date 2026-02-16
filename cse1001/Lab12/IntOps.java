public class IntOps
{
  public static void main(String[] args) 
  {
    int a, b, sum, prod, quot, rem;
    a = Integer.parseInt(args[0]); // Notice the Integer.parseInt
    b = Integer.parseInt(args[1]);
    sum = a + b;
    prod = a * b;
    quot = a / b;
    rem = a % b;
    System.out.println("Sum = " + sum);
    System.out.println("Product = " + prod);
    System.out.println("Quotient = " + quot);
    System.out.println("Remainder = " + rem);
   }
}
