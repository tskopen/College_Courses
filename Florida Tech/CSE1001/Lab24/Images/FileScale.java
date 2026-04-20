import java.util.*;
class FileScale 
{
  static int[][] scalledHorizontally(int source[][], double xFactor)
  {
    int[][] scaledMap;
    scaledMap = new int[(int)(source.length)][(int)(source[0].length * xFactor)];

      for(int i = 0; i < scaledMap.length; i++)
      {
        for(int j = 0; j < scaledMap[i].length; j++)
        {
            scaledMap[i][j] = source[(int)Math.floor(i)][(int)Math.floor(j / xFactor)];        
        }
      }

      return scaledMap;
  } 

 public static void main(String[]args) {
  Scanner scanner = new Scanner(System.in);
  int[][] colorMap;
  int[][] scaledMap;

  String sourceFilename, targetFilename;
  int xFactor;

    System.out.print("Enter source image filename: ");
    sourceFilename = scanner.next();

    System.out.print("Enter scale: ");
    xFactor = scanner.nextInt();
    colorMap = BitmapLoader.readImage(sourceFilename);

    scaledMap = new int[colorMap.length * xFactor][colorMap.length * xFactor];

    System.out.print("Enter target bmp image filename: ");
    targetFilename = scanner.next();

    // TODO: in a cycle of i from x to x+w

  scaledMap = scalledHorizontally(colorMap, xFactor);

  boolean result = BitmapLoader.writeImage(targetFilename, scaledMap);
  System.out.println("The scaled.bmp file creation success: " + result);

 }
}