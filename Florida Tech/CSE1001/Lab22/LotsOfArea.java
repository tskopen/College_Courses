/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab:  21

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 9th

 * @Description: User program to call calcuation functions of various shapes based on user input. Loop with user input.

 * **************************************************************************/

import java.util.Scanner;

class Area {
  public static void main (String[] args) 
  {
   String type;
   double area = 0;
   Scanner scanner = new Scanner(System.in);
   // TODO: init scanner and ask type with scanner.next() rather than scanner.nextLine()!.
    System.out.print("Enter type of figure (circle, triangle, or trapezoid): ");
    type = scanner.nextLine();
  
    boolean continueBool = true;
    String continueAnswer = "no";
    
    while (continueBool == true)
    {
      switch(type) 
      {
      // here we provide an example of area computation, namely for trapezoid
      case "trapezoid":
        {  // we create a block with brackets to isolate variables scope of the figure from other cases
        System.out.print("Enter long base: ");
        double longBase = scanner.nextDouble();
        System.out.print("Enter short base: ");
        double shortBase = scanner.nextDouble();
        System.out.print("Enter height: ");
        double height = scanner.nextDouble();
        area = trapezoidArea(longBase, shortBase, height);
        System.out.println("Total area: "+area+" square inches");
        }
        break;

      case "circle":
        {  // we create a block with brackets to isolate variables scope of the figure from other cases
        System.out.print("Enter radius: ");
        double radius = scanner.nextDouble();
        area = circleArea(radius);

        System.out.println("Total area: "+area+" square inches");
        }
        break;

      case "triangle":
        {  // we create a block with brackets to isolate variables scope of the figure from other cases
        System.out.print("Enter base: ");
        double base = scanner.nextDouble();

        System.out.print("Enter height: ");
        double height = scanner.nextDouble();

        area = triangleArea(base, height);
        System.out.println("Total area: "+area+" square inches");
        }
        break;

      default:
        System.out.println("Sorry, input must be circle, triangle, or rectangle");
        break;
      }

      System.out.println("Would you like to calculate the area of another figure: ");
      continueAnswer = scanner.next();
      
      if (continueAnswer.equals("no"))
      {
        continueBool = false;
      }
      else if (continueAnswer.equals("yes"))
      {
        System.out.print("Enter type of figure (circle, triangle, or trapezoid): ");
        type = scanner.next();
      }
    }
  }

  static double trapezoidArea(double longBase, double shortBase, double height) 
  {
    return height*(longBase+shortBase)/2;
  }
  static double circleArea(double radius) 
  {
    return radius * radius * Math.PI;
  }
  static double triangleArea(double base, double height) 
  {
    return base * height;
  }

  // TODO: implement methods circleArea, triangleArea, rectangleArea
}