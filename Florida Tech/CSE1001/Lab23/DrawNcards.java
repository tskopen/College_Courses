/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 23

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 14

 * @Description: Draw a set number of images based on user input
 * **************************************************************************/

import java.util.*;
class DrawCard 
{
  static Random random = new Random();

  final static String[] suit = {"Clubs", "Diamonds", "Hearts", "Spades"};
  final static String[] card = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

  static void generateCard(int n) 
  {
    
    
    int suitIndex, cardIndex;    // number representation of suit and card
    for(int i = 0; i < n; i ++)
    {
      suitIndex = random.nextInt(4);
      cardIndex = random.nextInt(13);
      System.out.println(card[cardIndex] + " of " + suit[suitIndex]);
    }

  }

  public static void main(String[]args) 
  {
    Scanner scanner = new Scanner(System.in);
    System.out.println("How many cards would you like: ");

    int n = scanner.nextInt();
    generateCard(n);
  }
}
