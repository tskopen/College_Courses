/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 25

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: Apr 21, 2025.

 * @Description: 

 * **************************************************************************/

import java.util.Scanner;

class DataAnalysis
{
  public static void main(String[]args)
  {
    int N = 150;

    double[] x = new double[N];
    double[] y = new double[N];
    int[] color = new int[N];

    double m = .1, n = .1;
    Scanner scanner = new Scanner(System.in);

    // TODO also allocate arrays of double y and scanner
    
    for (int i = 0; i < N; i++)
    {
      x[i] = scanner.nextDouble();
      y[i] = scanner.nextDouble();
      color[i] = scanner.nextInt();
    }
    StdDraw.setCanvasSize(600, 600);
    StdDraw.setXscale(4.3, 7.9);
    StdDraw.setYscale(2.0, 4.4);
    StdDraw.enableDoubleBuffering();
    while (m != 0 && n != 0)
    {
      for (int i = 0; i < N; i++)
      {
        switch(color[i])
        {
          case 0:
            StdDraw.setPenColor(StdDraw.BLACK); 
            break;
          case 1:
            StdDraw.setPenColor(StdDraw.GREEN); 
            break;
          case 2:
            StdDraw.setPenColor(StdDraw.RED);
            break;
          default:
            StdDraw.setPenColor(StdDraw.BLACK); 
            break;
        }
        StdDraw.point(x[i], y[i]); StdDraw.filledCircle(x[i], y[i], 0.03);
        StdDraw.show();
      }

        System.out.print("Enter slope m: ");
        m = scanner.nextDouble();

        System.out.print("Enter intercept n: ");
        n = scanner.nextDouble();
        
        StdDraw.setPenColor(StdDraw.GREEN);
        StdDraw.line(4.3,m*4.3+n, 7.9, m*7.9 + n);

      }

  }
}
