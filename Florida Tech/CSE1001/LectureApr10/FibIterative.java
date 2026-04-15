class FibIterative
{
    public static void main(String[]args)
    {
    if (args.length > 0)
    {
        System.out.println("Fib " + args[0] + " = " + fibI(Integer.parseInt(args[0])));
    }
    
    }
    static int fibI(int n)
    {
        int fibs[] = new int [n + 1];

        if (n == 1) return 0;
        if (n == 2) return 1;

        fibs[1] = 0;
        fibs[2] = 1;
        for(int i = 3; i <=n; i ++)
        {
            fibs[i] = fibI(i-1) +fibI(i-2);
        }
        return fibs[n];


    }
}
