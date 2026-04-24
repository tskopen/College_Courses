import java.util.Scanner;

class nrFibonacci
{
    public static int nonRecursiveFib(int n) {
        if (n == 1)
           return 0;
        else if (n == 2)
           return 1;
        else {
           int a, b, c = 0;
           a = 0;
           b = 1;
           for (int i=3; i<=n; i++) {
               c = a+b;
               a = b;
               b = c;
           }
           return c;
        }
    }
    public static void main(String[]args)
    {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        System.out.println(nonRecursiveFib(n));
    }

}
