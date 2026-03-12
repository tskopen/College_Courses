public class TimedAnimation
{
  public static void main(String args[]) throws Exception
  {

    System.out.print("\033[H\033[2J-------------------\n *\n\n\n-------------------\n");
    Thread.sleep(1000);
    System.out.print("\033[H\033[2J-------------------\n\n *\n\n-------------------\n");
    Thread.sleep(1000);   
    System.out.print("\033[H\033[2J-------------------\n\n\n *\n-------------------\n");
    Thread.sleep(1000);    
    System.out.print("\033[H\033[2J-------------------\n\n *\n\n-------------------\n");
  }
}
