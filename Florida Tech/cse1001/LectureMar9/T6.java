class T3 
{
  public static void main (String[]args)
  {
    for (int line = 1; line <= 5; line ++, System.out.println())
    {
      for (int col = -1 * line + 6 ; col >= 1; col --)
      {
	System.out.print(col + " ");
      }
    }
  }
}
