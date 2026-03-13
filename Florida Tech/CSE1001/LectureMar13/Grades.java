class Grades
{
  public static void main(String[]a)
  {
    char[]grades = new char[20];
    java.util.Random prng = new java.util.Random();
    for (int i = 0; i < grades.length; i++)
    {
      int r = prng.nextInt(5);
      if(r==4)
      {
      r  = 3;
      }
      grades[i] = (char) ('A' + r);
    }
      for (int i = 0; i < grades.length; i ++)
      {
        System.out.println(grades[i]);
      }
    }
}
