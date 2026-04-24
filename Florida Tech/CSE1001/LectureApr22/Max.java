class Max
{
    static int max(int def, Object...ops)
    {
        int _max = def;
        for(int i = 0; i < ops.length; i ++)
        {
            if (ops[i] instanceof Integer)
            {
                if ((Integer)ops[i] > _max)
                {
                    _max = (Integer)ops[i];
                }
           }
           if (ops[i] instanceof String)
           {
                int crt = Integer.parseInt(""+ops[i]);
                if (crt > _max)
                {
                    _max = crt;
                }
           }
        }
        return _max;
    }
    public static void main(String[]args)
    {
        System.out.println("max 1 3 arg = " + max(-1, 1, "2", args[0]));
    }
}
