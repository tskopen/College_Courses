import java.util.Scanner;

public class ClassSemiCircle
{
  final static int R = 15;
  public static void main(String[]Args)
  {
  for(int x  = -R; x <= R; x++, System.out.println())
    {
     int y = -2*R;

     for(; x*x + y/2.*y/2. > R*R ; y++)
	{
         System.out.print(" ");
         if (y > 0) {
           System.out.println();
  	   break;
         }
	}

      for(; x*x + (y/2.)*(y/2.) <= R*R; y ++)
      {
        System.out.print("*");
      }
     }
   }

}
