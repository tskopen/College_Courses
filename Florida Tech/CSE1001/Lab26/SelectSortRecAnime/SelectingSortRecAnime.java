import java.awt.Color;
class SelectingSortRecAnime {

 static int findMinPos(int[]a, int first){
  int minPos = first;
  for (int i = first + 1; i < a.length; i ++) { 
    if (a[i] < a[minPos]) minPos = i;
  }
  return minPos;
 }

 static void selectSortRec(int[]a, int first) {
   if (first == a.length - 2) return;
   int minPos = findMinPos(a, first);
   if (minPos != first) ArrayAnime.swap(a, first, minPos);
   ArrayAnime.draw(a,-1,first,-1, StdDraw.BLACK, StdDraw.BLACK, StdDraw.BLACK);
   StdDraw.pause(2000);
   selectSortRec(a, first+1);
 }

 public static void main(String[] args) {
  // Initialize drawing canvas and font
  ArrayAnime.initCanvas(30);

  int a[] = {50,40,30,20,10}; // Array to sort

  selectSortRec(a, 0);

  // Show final result
  ArrayAnime.draw(a,-1,a.length,-1, StdDraw.BLACK, StdDraw.BLACK, StdDraw.BLACK);  
 }
}
