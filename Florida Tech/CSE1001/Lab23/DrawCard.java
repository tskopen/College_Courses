/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 23

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 14

 * @Description: Index random card
 * **************************************************************************/

import java.util.*;
class DrawCard 
{
  static Random random = new Random();

  static void generateCard() 
  {
    
    String suitName = null, cardName = null;   // text strings for suit and card
    int suitIndex, cardIndex;    // number representation of suit and card
    // use random to generate the suitIndex in interval [0..3]
    suitIndex = random.nextInt(4);
    cardIndex = random.nextInt(13);

    switch (suitIndex) 
    { 
        case 0: suitName = "Clubs"; break;
        case 1: suitName = "Spades"; break;
        case 2: suitName = "Hearts"; break;
        case 3: suitName = "Diamonds"; break;
    }
    switch (cardIndex) 
    { 
        case 0: cardName = "Ace"; break;
        case 1: cardName = "2"; break;
        case 2: cardName = "3"; break;
        case 3: cardName = "4"; break;
        case 4: cardName = "5"; break;
        case 5: cardName = "6"; break;
        case 6: cardName = "7"; break;
        case 7: cardName = "8"; break;
        case 8: cardName = "9"; break;
        case 9: cardName = "10"; break;
        case 10: cardName = "Jack"; break;
        case 11: cardName = "Queen"; break;
        case 12: cardName = "King"; break;
    }
      System.out.println(cardName + " of " + suitName);
  }

  public static void main(String[]args) 
  {
    generateCard();
  }
}
