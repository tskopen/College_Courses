import java.util.Scanner;
class StoreSwitchNoBreak {
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

  switch (option) {
  case 1: total += 10;  //1 - book $15 (10-5+10=15) // +10 here, -5 at the next case, and +10 at the 3rd case
  case 2: total -= 5;   //2 - bag  $5 (-5+10 = 5)
  case 3: total += 10;  //3 - ball $10 
     break;
   case 4: System.exit(0);
   default:
     System.out.println("Unknown product");
     System.exit(0);
  }
  System.out.println("Your total is: $" + total);
  in.close(); // Close scanner when done using it
 }
}
