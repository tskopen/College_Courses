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

  public static void main (String[]args)
  {
   char[] grades = new char[45];

   Random generator = new Random();

   for (int i = 0; i <= grades.length - 1; i ++)
   {
     grades[i] = (char) ('A' + generator.nextInt(5));
   }
   //new AM1.showArray(grades);
   showArray(grades);
  }
}

