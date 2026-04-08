import java.util.Random;

class AM1
{
  public static void showArray(char[]a)
  {
    for (int i = 0; i <= a.length - 1; i ++)
    {
      System.out.println(a[i]);
    }
  }

  public static void showArray(int[]a)
  {
    for (int i = 0; i <= a.length - 1; i ++)
    {
      System.out.println(a[i]);
    }
  }


  public static void main (String[]args)
  {
   char[] grades = new char[45];
   char[] status = new char[20];
   int[] myInts = new int[10];
   Random generator = new Random();

   for (int i = 0; i <= grades.length - 1; i ++)
   {
     grades[i] = (char) ('A' + generator.nextInt(5));
     if (i<20) status[i] = generator.nextInt(2)==0?'R' : 'U';
     if (i<10) myInts[i] = generator.nextInt(101);
   }
   //new AM1.showArray(grades);
   showArray(grades);
   System.out.println("Status: ");
   showArray(status);
   showArray(myInts);
  }
}

