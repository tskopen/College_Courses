class D2D
 {
   public static void main(String[]args)
   {
    int a[][] =
        {{1, 2, 3},
	     {4, 5, 6, 7}};

    for(int row = 0; row < a.length; row ++)
    {
      for(int col = 0; col < a[row].length; col ++)
      {
        System.out.print(a[row][col] + " ");
      }
      System.out.println();
    }

    
    boolean col_exists = true;
    for(int col = 0; col_exists; col ++, System.out.println())
    {
        col_exists = false;
        for(int row = 0; row < a.length; row ++)
        {
            //System.out.print(" " + (col < a[row].length ? a[row][col] : " "));
            if (a[row].length > col) 
            {
                col_exists = true;
                System.out.print(" " + a[row][col]);
            }
            else
            {
                System.out.println(); 
            }
        }

    }
/*
    for(int col = 0; col < a[0].length; col ++)
    {
      for(int row = 0; row < a.length; row ++)
      {
        System.out.print(a[row][col] + " ");
      }
      System.out.println();
    }
*/
  }
}
