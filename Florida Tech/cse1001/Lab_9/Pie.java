import java.util.Scanner;
import java.lang.Math;
class Pie 
{
 public static void main(String[] args)
 {
  Scanner kb = new Scanner(System.in);

  System.out.println("enter the radius");
  double radius = kb.nextDouble();

  System.out.print("Area of circle is: ");
  double area = Math.PI * radius * radius;

 System.out.println(area);
 }
}
