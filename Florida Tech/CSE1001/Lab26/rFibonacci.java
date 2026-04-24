import java.util.Scanner;

class rFibonacci
{
    public static int fib(int n)
    {
        if (n==1)
            return 0;
        else if (n==2)
            return 1;
        else
            return fib(n-1) + fib(n-2);
    }

    public static void main(String[]args)
    {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        System.out.println(fib(n));
    }

}
