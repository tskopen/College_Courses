class T3 
{
  public static void main (String[]args)
  {
    for (int line = 0; line < 5; line ++, System.out.println())
    {
      for (int col = line + 1 ; col < line + 6; col ++)
      {
	System.out.print( ((col - 1) % 5 + 1) + " ");
      }
    }
  }
}
