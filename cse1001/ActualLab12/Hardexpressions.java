// Program name : Hardexpressions.java
// Author : Venkatesh Ramamoorthy
// Purpose : This is a test Java program that demonstrates use
// of ++, --, and their precedences over other operators
// The program discusses the significance of "%" when the
// dividend and / or divisor is negative.
import java.util.* ;
public class Hardexpressions {
public static void main(String[] args) {
// Increment and Decrement operators.
int x = 10,
y = 20,
z = 30,
u = 15,
v = 4 ;
int result ;

// Pre-increment/decrement and post-increment/decrement
// operators and their precedences.
System.out.println("x = " + x + ", y = " + y + ", z = " + z) ;
result = -x-- - -++y * --z % 2 ;
System.out.println("-x-- - -++y * --z % 2 = " + result) ;
System.out.println("x = " + x + ", y = " + y + ", z = " + z) ;
System.out.println() ;
x = 10 ;
System.out.println("x = " + x) ;
result = -x-- - -++x * --x % 2 ;
System.out.println("-x-- - -++x * --x % 2 = " + result) ;
System.out.println("x = " + x) ;
System.out.println() ;
}
}
