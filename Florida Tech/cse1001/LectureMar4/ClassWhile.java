class ClassWhile
{
    static public void main(String[]args)
    {
    int i, n;
    System.out.print("Enter N: ");
    java.util.Scanner kb = new java.util.Scanner(System.in);
    n = kb.nextInt();
    i = 1;
    while (i <= n)
    {
      System.out.println("Hello World!");
      i = i + 1;
    }
    }
}
