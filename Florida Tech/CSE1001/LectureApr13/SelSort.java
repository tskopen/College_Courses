class SelSort
{
    public static void selectionSort(int[]a)
    {
        int minPos, temp;
        for (int i = 0; i <= a.length-2; i++)
        {
            minPos = i;
            for (int j = i + 1; j <= a.length-1; j++)
            {
                if (a[j] < a[minPos]) minPos = j;
            }
        //a += b; b = a-b; a -= b;
        temp = a[i]; a[i] = a[minPos]; a[minPos] = temp;
        }
    }

    public static void printArray(int[]a)
    {
        for(int i = 0; i < a.length; i++)
        {
            System.out.print(a[i] + " ");
            System.out.println();
        }
    }

    public static void main(String[]args)
    {
        int[]a = {10, 9, 11, 75, 12};
        selectionSort(a);
        printArray(a);
    }
}
