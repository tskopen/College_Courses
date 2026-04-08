class Statics
{
    static int a = 10;

    static 
    {
      b = 20;
      //System.out.println("static: a="+a" b="+b);
      //System.out.println("static: a="+a+" c="+c);
      something();
    }

    static int b = 5;

    final static int c = something();

    static int something()
    {
      System.out.println("something: a="+a+" b="+b +" c="+c);
      return 40;
    }

    static public void main(String[]args)
    {
      System.out.println("Main: a=" + a + " b=" + b +" c="+c);
    }
}
