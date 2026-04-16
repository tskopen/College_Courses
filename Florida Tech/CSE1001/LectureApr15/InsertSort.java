class InsertSort
{
    public static void insert(int[] a, int idx)
    {
        int v = a[idx];
        int j = idx;
        while (j >= 1 && v < a[j-1])
        {
            a[j] = a[j - 1];
            j = j - 1;
        }
        a[j] = v;
    }
    public static void insertSort(int[]a, int insertIdx)
    {
        if (insertIdx == a.length) return;
        int j, v;
        insertValue(a, insertIdx);
        insertoSort(a, inserIdx + 1);
        
    }
    static public void  main(String[]args)
    {
        int[]a = {10, 9, 11, 75, 12};
        insertSort(a,0);
        RecursiveSelSort.printArray(a);
    }
}
