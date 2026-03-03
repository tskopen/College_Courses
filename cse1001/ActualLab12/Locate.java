import java.util.Scanner;

public class Locate 
{
    public static void main(String[] args) 
    {

        String haystack = args[0];

        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter Word: ");
        String needle = scanner.next();

        int index = 0;
        int count = 1;

        while ((index = haystack.indexOf(needle, index)) != -1) {
            if (count == 1) 
            {
                System.out.println("First Occurrence - Position " + index);
            } 
            else if (count == 2) 
            {
                System.out.println("Second Occurrence - Position " + index);
            } 
            else if (count == 3) 
            {
                System.out.println("Third Occurrence - Position " + index);
            }
	        else
            {
                System.out.println(count + "th Occurrence - Position " + index);
            }

            index = index + needle.length();
            count++;
        }

        scanner.close();
    }
}
