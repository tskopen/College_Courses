class T3 
{
  public static void main (String[]args)
  {
    for (int line = 1; line <= 5; line ++, System.out.println())
    {
      for (int col = 5 ; col >= line; col --)
      {
	System.out.print(col + " ");
      }
    }
  }
}
