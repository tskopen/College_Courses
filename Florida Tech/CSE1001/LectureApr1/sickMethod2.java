public class sickMethod
{
    static int x,y,z;

    static void header()
    {
    System.out.println("*********************************************");
    System.out.println(" Welcome to the random calculation program ");
    System.out.println("*********************************************");

    }

    static void computation()
    {
    x = 25;
    y = 300;
    z = x * y;
    System.out.println(z);
    }

    public static void main(String[] args)
    {
//    sickMethod obj = new sickMethod();
//    obj.header();
    header();
    computation();
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
