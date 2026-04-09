/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 19

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 9

 * @Description:  Use the Bitmap file to perfrom a horizontal flip on an image matrix.

 * **************************************************************************/
import java.util.Scanner;

public class FlipImageHorizontally 
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
        for (int i = 0; i < colorMap.length; i++) 
        {            
            int temp;
            for(int j = 0; j < colorMap.length/2; j++)
            { // swap row i and row colorMap.length-1-i
                temp = colorMap[i][j];
                colorMap[i][j] = colorMap[i][colorMap[i].length-1-j];
                colorMap[i][colorMap[i].length-1-j] = temp;
            }
        }
    }
}