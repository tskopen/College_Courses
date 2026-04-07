public class sickMethod
{
    static int x,y,z;

    static void header()
    {
    System.out.println("*********************************************");
    System.out.println(" Welcome to the random calculation program ");
    System.out.println("*********************************************");

    }

    static int computation()
    {
    x = 25;
    y = 300;
    z = x * y;
    return z;
    }

    public static void main(String[] args)
    {
//    sickMethod obj = new sickMethod();
//    obj.header();
    header();
    z = computation();
    System.out.println(z);
    footer();
    }

    static void footer()
    {
    System.out.println("*********************************************");
    System.out.println(" We hope you enjoyed the experience ");
    System.out.println(" Please come again! ");
    System.out.println("*********************************************");
    }

}
