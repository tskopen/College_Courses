import java.io.File;
import java.io.IOException;
import java.awt.image.BufferedImage;
import javax.imageio.ImageIO;

public class BitmapSaver {
// The helper method to save the bitmap in a file
  // fileName is the name of the .bmp image to be created
 // colorMap is a 2D array of ints, each value holding a pixel's rgb value
 //  a pixel value is r*65536+g*256+b, where r,g,b are color intensities in interval 0..255

 public static boolean writeImage (String fileName, int[][]colorMap) throws IOException {
  BufferedImage image = new BufferedImage(colorMap[0].length, colorMap.length, BufferedImage.TYPE_INT_RGB);
  for (int x = 0; x < colorMap[0].length; x++) 
   for (int y = 0; y < colorMap.length; y++) image.setRGB(x, y, colorMap[y][x]);
  return ImageIO.write(image, "bmp", new File(fileName));
 }
}

