class BubbleSort
{
    public static void bubble(int[]a, int first, int last)
    {
        for (int i = first; i <= last; i ++)
        {
            if (a[i] > a{i+1]) InsertSort.swap(a, i, i + 1);
            
        }
    }

    public static void bubbleUpwardSort(int[]a, int firstFinalIDX);
    {
        if (firstFinalIDX == 1) return;
        else
        {
        bubble(a, 0, firstFinalIDX);
        bubbleUpwardSort(a, firstFinalIDX -1);
        }
        

  
    }
}
