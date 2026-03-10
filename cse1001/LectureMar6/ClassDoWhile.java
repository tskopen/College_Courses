class ClassDoWhile
{
  static public void main(String[]args)
  {
    java.util.Scanner sc = new java.util.Scanner(System.in);
    int sum = 0, x;
    do
    {
     x = sc.nextInt();
     sum += x;
    } while(x != 0);
    System.out.println("Sum=" + sum);
  }

}
