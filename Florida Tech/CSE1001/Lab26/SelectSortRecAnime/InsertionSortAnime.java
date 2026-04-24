import java.awt.Color;
class SelectingSortRecAnime {

 static int findMinPos(int[]a, int first){
  int minPos = first;
  for (int i = first + 1; i < a.length; i ++) { 
    if (a[i] < a[minPos]) minPos = i;
  }
  return minPos;
 }

public static void insertationSort(int[] a, int first) {
    for (int i = 1; i < a.length; i++) {
        int j = i;
        while (j >= 1 && a[j] < a[j - 1]) {
            int temp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = temp;
            j--;
        }
        ArrayAnime.draw(a, -1, first, -1, StdDraw.BLACK, StdDraw.BLACK, StdDraw.BLACK);
        StdDraw.pause(1000);
    }
}

 public static void main(String[] args) {
  // Initialize drawing canvas and font
  ArrayAnime.initCanvas(30);

  int a[] = {50,40,30,20,10}; // Array to sort

  insertationSort(a, 0);

  // Show final result
  ArrayAnime.draw(a,-1,a.length,-1, StdDraw.BLACK, StdDraw.BLACK, StdDraw.BLACK);  
 }
}
