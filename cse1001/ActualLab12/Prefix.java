import java.util.Scanner;

class Prefix {
  public static void main(String[] args)
  {
     Scanner scanner = new Scanner(System.in);

     System.out.print("Enter a word with a prefix: ");
     String word = scanner.next();


     System.out.print("Enter the word base: ");

     String base = scanner.next();

     int stop_index = (word.length()-base.length());
     int start_index = 0;
     System.out.println(word.substring(start_index, stop_index));
  }
}
