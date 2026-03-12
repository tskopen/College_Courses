/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 16

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: March 12th 2026

 * @Description: Show whether a letter is a vowel or consonant

 * **************************************************************************/

import java.util.Scanner;

public class Vowel
{
  public static void main(String[]args)
  {
    Scanner sc = new Scanner(System.in);
    String line = sc.nextLine();
    String lowCaseLine = line.toLowerCase();
    for (int i = 0;  i < line.length(); i ++) 
    {
      char lowCaseChar = lowCaseLine.charAt(i);
      switch(lowCaseChar)
      {
        case 'a':
        case 'e':
        case 'u':
        case 'i':
        case 'o':
          System.out.println(line.charAt(i) + " is a vowel");
          break;
        default:
          if (lowCaseChar >= 'b' && lowCaseChar <= 'z') 
          {
            System.out.println(line.charAt(i) + " is a consonant");
          } 
          else 
          {
            System.out.println(line.charAt(i) + " is some other character");
          }
      }
    }
  }
}

