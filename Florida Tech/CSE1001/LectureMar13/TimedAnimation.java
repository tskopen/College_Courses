class TimedAnimation {
  public static void main (String[] args) throws Exception {
System.out.println("\033[H\033[2J-------------------\n *\n\n\n-------------------\n");
Thread.sleep(1000);
System.out.println("\033[H\033[2J-------------------\n\n *\n\n-------------------\n");
Thread.sleep(1000);
System.out.println("\033[H\033[2J-------------------\n\n\n *\007\n-------------------\n");
Thread.sleep(1000);
System.out.println("\033[H\033[2J-------------------\n\n *\n\n-------------------\n");
Thread.sleep(1000);
}
}
