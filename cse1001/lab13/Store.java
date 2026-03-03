import java.util.Scanner;
public class Store {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in); // Setting up scanner
        int total = 0;  
        int option = 0;         

        System.out.println("Select a product to purchase:");
        System.out.println("    1 - book $15");
        System.out.println("    2 - bag  $5");
        System.out.println("    3 - ball $10");
        System.out.println("    4 - cancel");
        System.out.print("Select an option: ");
     
        option = in.nextInt();

        //TODO: replace the next if chain with a switch(option) statement. 
        //      Do not forget "break;" statements after each case!!!
        //      and since option is type int, not String, cases contain no "", like (case 1: case 2:)
     
       switch(option)
{
   case (1):
            total = total + 15;  // Note this can be written in Java as "total += 15;"                  
	break;
   case (2):
            total = total + 5;
	break;   // Note this can be written in Java as "total += 5;" 
   case (3):
            total = total + 10;
        break;
   case (4):
            System.exit(0); // Exit program 
        break;

	default:
            System.out.print("Unknown option: " + option);
            System.exit(0); // Exit program 
}

        System.out.println("Your total is: $" + total);
        in.close(); // Close scanner when done using it
    }
}
