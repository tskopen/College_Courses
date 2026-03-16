class EqualArray
{
  public static void main(String[]args)
  {
    int[]a = {1, 2, 3, 4, 5, 6, 7};
    int[]b = {1, 2, 3, 4, 5, 6, 7};
    boolean different = false;

    if (a.length != b.length)
    {
      different = true;
    }
    for (int i = 0; i < a.length && !different; i ++)
    {
      if(a[i] != b[i])
      {
        different = true;
      }
    }
  System.out.println("The arrays are " + (different?"different":"equal"));
  }
}
