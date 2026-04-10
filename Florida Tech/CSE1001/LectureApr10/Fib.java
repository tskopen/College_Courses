class Fib
{
    public static void main(String[]args)
    {
    if (args.length > 0)
    {
        System.out.println("Fib " + args[0] + " = " + fib(Integer.parseInt(args[0])));
    }
    
    }
    static int fib(int n)
    {
        if (n == 1)
        {
            return 0;
        }
        if (n == 2)
        {
            return 1;
        }

        return fib(n-1) + fib(n-2);

    }
}
