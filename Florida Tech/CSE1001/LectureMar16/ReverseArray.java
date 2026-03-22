class reverseArray
{
  public static void main(String[]args)
  {
    int[]a = {1,2,3,4,5};
    
    for (int i = 0; i < a.length/2; i ++)
    {
      int tmp = a[a.length - 1 - i];
      a[a.length - 1 - i] = a[i];
      a[i] = tmp;
    }
    for (int i = 0 ; i < a.length; i++)
    {
      System.out.println(a[i]);
    }
  }
}
