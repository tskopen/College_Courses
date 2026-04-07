public class intTest 
{
    static int i, x = 0;
    public static void exam(double m, String S) 
    {
        //int x=0;
        System.out.println(m);
        System.out.println(i);
        System.out.println(x);
        System.out.println(S);
    }
    public static void main(String[] args) 
    {
        //int i;
        double m1;

        exam(3.0, "car");
        i = 10;
        m1 = i;
        exam(i,"cow");
        x = 0;
        m1 = 0.0;
        for (int x=1; x<=10; x++)
        exam(x, "cow");
        //exam("dog",3.15);
        exam(3.15, "dog");
        for (int x=1; x<=10; x++) 
        {
            System.out.println("hello");
            exam(10.5,"a");
        }
    }
}