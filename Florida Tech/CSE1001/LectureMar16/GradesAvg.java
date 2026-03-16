import java.util.Scanner;

class GradesAvg
{
  public static void main(String[] args)
  {
     // int[] grades;
    int n, sum = 0, grades[];
    double avg;
    
    Scanner scanner = new Scanner(System.in);
    // input n
    System.out.print("Enter # of Grades:");
    n = scanner.nextInt();

    // allocate arry
    grades = new int[n];
    // input grades
    for(int i = 0; i < n; i++)
    {
      System.out.print("Enter Grade:");
      grades[i] = scanner.nextInt();
    }
    // calculate average
    for(int i = 0; i < n; i ++)
    {
      sum += grades[i];
    }
    avg = (double) sum / n; 
    System.out.println("\nThe average is: " + avg);
   // compare grades to avg
   for(int i = 0; i < n; i ++)
   {
     String position;
     if (grades[i] < avg)
     {
       position = "below";
     }
     else
     {
       position = "above";
     }
     System.out.println("Student #" + i + " is " + position + " average");
   }
  }
}
