class HardexpressionsB {
 public static void main(String[] args) {
  int x = 10, y = 20, z = 30, u = 15, v = 4 ;
  int result ;
  int A, B, C, D, E, F, G, H, I;
  System.out.println("x = " + x + ", y = " + y + ", z = " + z) ;
  //result = -x-- - -++y * --z % 2 ;
  A=(result = B=(C=(-(D=(x--))) - (E=(F=(G=(-(H=(++y))) * (I=(--z))) % 2))));

  System.out.println("-x-- - -++y * --z % 2 = " + result) ;
  System.out.println("Final: x = " + x + ", y = " + y + ", z = " + z) ;
  System.out.println();

  System.out.println();
  System.out.println("A = " + A + ", B = " + B + ", C = " + C) ;
  System.out.println("D = " + D + ", E = " + E + ", F = " + F) ;
  System.out.println("G = " + G + ", H = " + H + ", I = " + I) ;
 }
}
