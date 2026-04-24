public class ForEach
{
    static int sum (Integer...ops)
    {
        int _sum = 0;
        for (int op : ops)
        {
            _sum += op;
        }
        return _sum;
    }

    static int max (int def, String...ops)
    {
        int _max = def;
        for (int i = 0; i <  ops.length; i ++)
        {
            int crt =  Integer.parseInt(ops[i]);
            if(crt > _max) _max = crt;
        }
        return _max;
    }

    public static void main(String[] args)
    {
        System.out.println(" Sum 1 + 2 + 3 + 4 = " + sum(1,2,3,4));        
        
        System.out.println("Max over args is: " + max(-1, args[0], args[1], args[2]));
    }

}
