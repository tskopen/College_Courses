import java.awt.Color;
class SelectingSortRecAnime {

 static int findMinPos(int[]a, int first){
  int minPos = first;
  for (int i = first + 1; i < a.length; i ++) { 
    if (a[i] < a[minPos]) minPos = i;
  }
  return minPos;
 }

    public static void selectionSort(int[] a, int first)
    {
        int minPos, temp;
    
        for (int i = 0; i <= a.length - 2; i ++)
        {
            minPos = i;

            for (int j = i + 1; j <= a.length - 1; j ++)
            {
                if (a[j] < a[minPos])
                    minPos = j;
            }

            temp = a[i];
            a[i] = a[minPos];
            a[minPos] = temp;

            ArrayAnime.draw(a,-1,first,-1, StdDraw.BLACK, StdDraw.BLACK, StdDraw.BLACK);
            StdDraw.pause(2000);
        }


    }
 public static void main(String[] args) {
  // Initialize drawing canvas and font
  ArrayAnime.initCanvas(30);

  int a[] = {50,40,30,20,10}; // Array to sort

  selectionSort(a, 0);

  // Show final result
  ArrayAnime.draw(a,-1,a.length,-1, StdDraw.BLACK, StdDraw.BLACK, StdDraw.BLACK);  
 }
}
