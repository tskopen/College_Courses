/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 19

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 4

 * @Description: Use the Bitmap file to perfrom a horizonal scroll on an image matrix.

 * **************************************************************************/
import java.util.Scanner;


public class FileScroll {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter source image filename: ");
        String sourceFilename = input.nextLine();

        System.out.print("Enter number of pixels to scroll: ");
        int n = input.nextInt();
        input.nextLine();

        System.out.print("Enter target bmp image filename: ");
        String targetFilename = input.nextLine();

        int[][] colorMap = BitmapLoader.readImage(sourceFilename);

        BitmapLoader.printRGB(colorMap);

        for (int i = 0; i < n; i++) 
        {
            Scroll.scroll(colorMap);
        }

        boolean result = BitmapLoader.writeImage(targetFilename, colorMap);

        System.out.println("The " + targetFilename + " file creation success: " + result);

        BitmapLoader.printRGB(colorMap);
    }
}