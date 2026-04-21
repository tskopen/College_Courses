import java.io.File;
import java.io.IOException;
import java.awt.image.BufferedImage;
import javax.imageio.ImageIO;


public class BitmapLoader {
 // The helper method to save the bitmap in a file
 // fileName is the name of the .bmp image to be created
 // colorMap is a 2D array of ints, each value holding a pixel's rgb value
 //  a pixel value is r*65536+g*256+b, where r,g,b are color intensities in interval 0..255

 public static boolean writeImage (String fileName, int[][]colorMap) {
  try{
   BufferedImage image = new BufferedImage(colorMap[0].length, colorMap.length, BufferedImage.TYPE_INT_RGB);
   for (int x = 0; x < colorMap[0].length; x++) 
    for (int y = 0; y < colorMap.length; y++) image.setRGB(x, y, colorMap[y][x]);
   return ImageIO.write(image, "bmp", new File(fileName));
  } catch(IOException e){
   e.printStackTrace();
   return false;
  }
 }
 
 public static int[][] readImage (String fileName) {
  try{
   BufferedImage image = ImageIO.read(new File(fileName));
   int[][] colorMap = new int[image.getHeight()][image.getWidth()];
   for (int x = 0; x < colorMap[0].length; x++)
    for (int y = 0; y < colorMap.length; y++)
      colorMap[y][x] =  image.getRGB(x, y) & 0xffffff;
   return colorMap;
  } catch(IOException e){
    e.printStackTrace();
    return null;
  }
 }

 public static void printRGB(int[][] colorMap) {
  for (int y = 0; y < colorMap.length; y++) {
   for (int x = 0; x < colorMap[0].length; x++) {
    System.out.printf("%7x", colorMap[y][x] & 0xffffff);
   }
   System.out.println();
  }
 }

public static void main (String[]args) throws Exception 
{
  String inFile = null, outFile = null;
  Boolean verbose = false;
  char c;
  while( (c = GetOpt.getopt(args, "i:o:v")) != GetOpt.END)
    {
      switch(c) 
      {
      case 'i': inFile = GetOpt.optarg; break;
      case 'o': outFile = GetOpt.optarg; break;
      case 'v': verbose = true; break;
      case '?': System.out.println("?:"+GetOpt.optopt); return;
      default:
      System.out.println("Error option: "+c);
      System.out.println("Call: java BitmapLoader -i image-in –o image-out.bmp -v");
      System.exit(-1);
      }
    }
  if (inFile == null) 
  {
    System.exit(-2);
  }

  int [][] colorMap = readImage(inFile);
  if (verbose) printRGB(colorMap);

  if (outFile != null) 
  {
    writeImage(outFile, colorMap);
  }
}
  /*
  if (args.length <= 0) {
   System.out.println("Call with: java BitmapLoader image-in image-out.bmp");
   System.exit(1);
  }
  int [][] colorMap = readImage(args[0]);
  printRGB(colorMap);
  if (args.length > 1) {
   writeImage( args[1], colorMap);
  }
  */
}


