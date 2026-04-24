import java.util.*;
import java.util.stream.*;

public class Sum
{
    static int sum (Integer...ops)
    {
        return Arrays.stream(ops).reduce(0, (a,b) -> a+b);
    }

    public static void main(String[] args)
    {
        System.out.println(" Sum 1 + 2 + 3 + 4 = " + sum(1,2,3,4));        
    }

}
