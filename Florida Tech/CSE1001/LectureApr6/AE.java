class AE
{
  public static void main(String[]args)
  {
    int[] a = new int[3];
    int[] b = new int[3];

    for (int i = 0; i < a.length; i ++) a[i] = 5;
    for (int i = 0; i < a.length; i ++) b[i] = 5;
    if (b==a) System.out.println("equal");
    else System.out.println("different");
  }

}
