class order2
{
  static int parameter1()
{
System.out.println("Parameter 1");
return 1;
}
static int parameter2()
{
System.out.println("Parameter 2");
return 2;

}

static int caller(int p1, int p2)
{
  return p1 + p2;
}
public static void main (String[] args)
{
System.exit(caller(parameter1(), parameter2()));
}
}



