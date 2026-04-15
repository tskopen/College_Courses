class NB
{
    public static void main(String[]a)
    {
        if (a.length > 0)
        {
            NBL(Integer.parseInt(a[0]));
        }
    }
    static void NBL(int n)
    {
        if (n <= 0) return;
        System.out.println();
        NBL(n-1);
    }
}
