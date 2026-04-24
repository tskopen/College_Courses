import java.util.Scanner;
public class Multiply {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int a = in.nextInt();

        System.out.print("Enter a number: ");
        int b = in.nextInt();

        int result = recursiveMultiply(a, b);

        System.out.print(a + " x " + b + " = " + result);
    }

    public static int recursiveMultiply(int a, int b) {
        if (b == 0)
        {
            return 0;
        }
        else
        {
            return a + recursiveMultiply(a, b-1);
        }

    }

}
