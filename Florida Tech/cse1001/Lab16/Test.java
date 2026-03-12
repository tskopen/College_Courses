/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 16

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: March 12th 2026

 * @Description: Show the 6th fibonaccy number

 * **************************************************************************/

class Test
{
  static public void main(String[]args)
  {
    int a, b, c;
    int n = 6;
    a = 1;
    b = 1;
    c = 0;

   for (int i = 3; i <= n; i ++)
   {
     c = a + b;
     a = b;
     b = c;
   }
    System.out.println("The 6th Fibonacci Number is: " + c);


  }
}
