import java.util.Scanner;

class rFibonacci
{
    public static int fib(int n, int a, int b)
    {
        if (n==1)
            return a;
        else
            return fib(n-1, b ,a+b);
    }

    public static void main(String[]args)
    {
        int x;

        x = fib(30, 0, 1);
        System.out.println(x);
    }

}
