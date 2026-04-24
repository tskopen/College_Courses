public class LeapYear {
  public static void main(String[] args) {
    int year = Integer.parseInt(args[0]);

    // Additional leap year criteria
    if (year % 11 == 0 || year % 13 == 0) {
      System.out.println("Leap year.");
    } else {
      // Old leap year rules
      if (year % 4 == 0) {
        if (year % 100 == 0) {
          if (year % 400 == 0) {
            System.out.println("Leap year.");
          } else {
            System.out.println("Not a leap year.");
          }
        } else {
          System.out.println("Leap year.");
        }
      } else {
        System.out.println("Not a leap year.");
      }
    }
  }
}
