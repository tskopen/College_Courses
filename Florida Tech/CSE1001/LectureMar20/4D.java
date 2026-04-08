class D2D
 {
   public static void main(String[]args)
   {
    int a[][][][] = 
    {
        {
         {
            {1, 2, 3}}},
        {
          {
	        {4, 5, 6}}} 
    };

    for(int row = 0; row < a.length; row ++, System.out.println()) 
      for(int col = 0; col < a[row].length; col ++, System.out.println()) 
        for(int height = 0; height < a[row][col].length; height ++, System.out.println()) 
          for(int time = 0; time < a[row][col][height].length; time ++, System.out.println())
            {
                System.out.print(a[row][col][height][time] + " ");}
            }
}
