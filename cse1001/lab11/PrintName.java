import java.util.Scanner;

class PrintName {
  static public void main (String[] args) 
  {
    Scanner tskopenscanner = new Scanner(System.in);

    System.out.println("What is your name?");
 
    String userName;    

    userName = tskopenscanner.next();

    System.out.println("So, your name is: " + userName);
  }
}
