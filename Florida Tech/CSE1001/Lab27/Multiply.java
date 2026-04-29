class Multiply {
 public static void printMul(int result, int[] ops) 
 {
   System.out.print("Multiply: [");

   for (int i: ops) System.out.print(i+" ");
   {
    System.out.println("] = " + result);
   }
 }

 public static int multiply(int...ops) 
 {
   int result = 1;
   for(var a : ops)
   {
        result *= a;
   }
 
   printMul(result, ops);
   return result;
 }
 public static void main(String[]args) 
 {
  multiply(1,2,3);
  multiply();
  multiply(-1,2,6,8);
 }
}