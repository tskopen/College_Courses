import java.util.Scanner;

class GradesAvg
{
  public static void main(String[] args)
  {
     // int[] grades;
    int n, sum1 = 0, sum2 = 0, grades1[], grades2[];
    double avg1, avg2;
    String[] name;



    Scanner scanner = new Scanner(System.in);
    // input n
    System.out.print("Enter # of Students:");
    n = scanner.nextInt();

    // allocate arry
    grades1 = new int[n];
    grades2 = new int[n];
    name = new String[n];

    // input grades


    for(int i = 0; i < n; i++)
    {
      System.out.print("Enter name for student #" + (i+1) + ":");
      name[i] = scanner.next();

      System.out.print("Enter exam #1:");
      grades1[i] = scanner.nextInt();

      System.out.println("Enter exam #2:");
      grades2[i] = scanner.nextInt();

    }
    // calculate average
    for(int i = 0; i < n; i ++)
    {
      sum1 += grades1[i];
      sum2 += grades2[i];
    }
    avg1 = (double) sum1 / n; 
    avg2 = (double) sum2 / n; 

    System.out.println("\nExam #1 average is: " + avg1);
    System.out.println("\nExam #2 average is: " + avg2);

   // compare grades to avg
   for(int i = 0; i < n; i ++)
   {
     String position1;
     if (grades1[i] < avg1)
     {
       position1 = "below";
     }
     else
     {
       position1 = "above";
     }
     System.out.println("Student " + name[i] + " is " + position1 + " average");
   
     String position2 = grades2[i] < avg2? "below":"above";
     System.out.println("Student " + name[i] + " is " + position2 + " average");
    }
  }
}
