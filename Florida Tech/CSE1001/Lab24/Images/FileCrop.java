import java.util.*;
class FileCrop 
{
  static int[][] crop(int[][] source, int x, int y, int w, int h)
  {
    int[][] croppedMap;
    croppedMap = new int[w][h];

      for(int i = x; i < x + w; i++)
      {
        for(int j = y; j < y + h; j++)
        {
          croppedMap[i - x][j - y] = source[(x)%source.length][(y)%source[i].length];
        }
      }
      return croppedMap;
  } 

 public static void main(String[]args) {
  Scanner scanner = new Scanner(System.in);
  int[][] colorMap;
  int[][] croppedMap;

  String sourceFilename, targetFilename;
  int x, y, w, h;

  System.out.print("Enter source image filename: ");
  sourceFilename = scanner.next();

    System.out.print("Enter origin x to scroll: ");
  x = scanner.nextInt();
    System.out.print("Enter origin y to scroll: ");
  y = scanner.nextInt();
    System.out.print("Enter origin w to scroll: ");
  w = scanner.nextInt();
    System.out.print("Enter origin h to scroll: ");
  h = scanner.nextInt();


    croppedMap = new int[w][h];

    System.out.print("Enter target bmp image filename: ");
    targetFilename = scanner.next();

    colorMap = BitmapLoader.readImage(sourceFilename);
    // TODO: in a cycle of i from x to x+w

  croppedMap = crop(colorMap, x, y, w, h);


  boolean result = BitmapLoader.writeImage(targetFilename, croppedMap);
  System.out.println("The cropped.bmp file creation success: " + result);

 }
}