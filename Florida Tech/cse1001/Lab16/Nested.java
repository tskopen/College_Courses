class Nested {
 public static void main(String[] args) {
  for (int line = 1; line <= 5; line++) {
   for (int col = 2 * line - 2; col >= line; col--) {
     System.out.print(col + " ");
   }
   System.out.println();
  }
 }
}