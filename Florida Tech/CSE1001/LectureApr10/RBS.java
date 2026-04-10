class RBS
{
    public static void main(String[]args)
    {
        int[] array = {1,2,3,4,5};
        int pos = rbs(Integer.parseInt(args[0]), array, 0, array.length-1);
        System.out.println(pos);
    }
    static int rbs(int needle, int[] haystack, int low, int high)
    {
        int mid = (low + high) / 2;

        if (low > high) return -1;

        if (needle == haystack[mid]) return mid;
        
        if (needle < haystack[mid])
            return rbs(needle, haystack, low, (mid-1));
        
        if (needle > haystack[mid])
            return rbs(needle, haystack, (mid + 1), high);
        else
            return -1;

    }
}
