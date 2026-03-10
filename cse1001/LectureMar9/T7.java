class T3 
{
  public static void main (String[]args)
  {
    for (int line = 0; line <= 4; line ++, System.out.println())
    {
      for (int col = -line + 5 ; col >= 1; col --)
      {
	System.out.print(col + " ");
      }
    }
  }
}
