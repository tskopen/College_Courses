class TimedAnimation 
{
 public static void main (String[] args) throws Exception 
{
   String frame;
   frame = "\033[H\033[2J-------------------\n *\n\n\n-------------------\n";
   System.out.println(frame);
   Thread.sleep(1000);
   frame = "\033[H\033[2J-------------------\n\n *\n\n-------------------\n";
   System.out.println(frame);
   Thread.sleep(1000);
   frame = "\033[H\033[2J-------------------\n\n\n *\007\n-------------------\n";
   System.out.println(frame);
   Thread.sleep(1000);
   frame = "\033[H\033[2J-------------------\n\n *\n\n-------------------\n";
   System.out.println(frame);
   Thread.sleep(1000);
 }
}
