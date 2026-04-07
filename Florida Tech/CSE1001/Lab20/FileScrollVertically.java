/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 19

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 4

 * @Description:  Use the Bitmap file to perfrom a Vertical scroll on an image matrix.

 * **************************************************************************/
import java.util.Scanner;

public class FileScrollVertically {
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
            scrollVertically(colorMap);
        }

        boolean result = BitmapLoader.writeImage(targetFilename, colorMap);

        System.out.println("The " + targetFilename + " file creation success: " + result);

        BitmapLoader.printRGB(colorMap);
    }

    public static void scrollVertically(int[][] colorMap) 
    {
        int[] temp_V = colorMap[0];

        for (int i = 1; i < colorMap.length; i++) 
        {
            colorMap[i - 1] = colorMap[i];
        }

        colorMap[colorMap.length - 1] = temp_V;
    }
}