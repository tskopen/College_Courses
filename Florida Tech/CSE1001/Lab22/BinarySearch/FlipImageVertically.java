/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 19

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 9

 * @Description:  Use the Bitmap file to perfrom a vertical flip on an image matrix.

 * **************************************************************************/
import java.util.Scanner;

public class FlipImageVertically 
{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter source image filename: ");
        String sourceFilename = input.nextLine();

        System.out.print("Enter target bmp image filename: ");
        String targetFilename = input.nextLine();

        int[][] colorMap = BitmapLoader.readImage(sourceFilename);

        BitmapLoader.printRGB(colorMap);


        flipVertically(colorMap);

        boolean result = BitmapLoader.writeImage(targetFilename, colorMap);

        System.out.println("The " + targetFilename + " file creation success: " + result);

        BitmapLoader.printRGB(colorMap);
    }

    public static void flipVertically(int[][] colorMap) 
    {
        int[] temp;
        for(int i = 0; i < colorMap.length/2; i++)
        { // swap row i and row colorMap.length-1-i
        temp = colorMap[i];
        colorMap[i] = colorMap[colorMap.length-1-i];
        colorMap[colorMap.length-1-i] = temp;
        }
    }
}