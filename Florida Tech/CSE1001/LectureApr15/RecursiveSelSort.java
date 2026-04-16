class RecursiveSelSort
{
    public static int findMinPos(int[]a, int startIdx)
    {
        int result = startIdx;
        for (int i = startIdx + 1; i < a.length; i ++)
        {
            if (a[i] < a[startIdx])
                result = i;
        }
        return result;
    }

    public static void swap(int[]a, int idx1, int idx2)
    {
        int temp = a[idx1];
        a[idx1] = a[idx2];
        a[idx2] = temp;
    }

    static void recSelSort(int[]a, int startIndex)
    {        
        if (startIndex == a.length - 1)
        {
            return;
        }

        int minPos = findMinPos(a, startIndex);

        swap(a, minPos, startIndex);

        recSelSort(a, startIndex + 1);
    }

    public static void printArray(int[]a)
    {
        for (int i = 0; i < a.length; i ++)
        {
            System.out.print(a[i]+" " );
        }
        System.out.println();
    }

    public static void main(String[] args)
    {
        int[]a = {10, 9, 11, 75, 12};

        recSelSort(a, 0);

        printArray(a);
    }
}
