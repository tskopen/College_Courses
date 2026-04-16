/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 24

 * @CSE 1001 Fund Software, Spring 2026

 * @Date: Apr 16, 2026

 * @Description:  

 * **************************************************************************/
import java.util.*;
class Searches {
    // sequential search method, also found in class activities and above in instructions
    public static int sequentialSearch(int[]a, int x) 
        {
            int i = 0;
            while ( i < a.length && x != a[i] ) i++;
            return  i < a.length ? i : -1;
        }

    // binary search is found in Canvas Files tab and above in instructions
    public static int binarySearch(int[] a, int x) 
        {
            int low;
            int high;
            int mid;
            low = 0;
            high = a.length-1;

            while (low <= high) 
            {
                mid = (low + high)/2;
                if (a[mid] == x)
                return mid;
                else if (x < a[mid])
                high = mid-1;
                else
                low = mid+1;
            }
            return -1;
        }

    // printArray is useful for debugging and easy to write by yourself as in previous labs
    public static void printArray(int[] myArray) 
    {
        for (int i = 0; i < myArray.length - 1; i++)
        {
            System.out.print(myArray[i]+" ");
        }
        System.out.println();

    }

    public static void main(String[] args) 
    {
        int n, m, x, y, resultIndex;
        // TODO: initialize scanner and random
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();

        // TODO: prompt "Enter Array Length: " and read  n
        System.out.print("Enter Array Length: ");
        n = scanner.nextInt();
        // TODO prompt "Enter Upper Bound: " and read m
        System.out.print("Enter Upper Bound: ");
        m = scanner.nextInt();
        // TODO: allocate myArray with n elements of type int
        int[] myArray = new int[n];

        // TODO: in a for loop from i=0 to n, fill myArray[i] with random.nextInt(m)
        for(int i = 0; i < n - 1; i ++)
        {
            myArray[i] = random.nextInt(m);
        }
        // TODO: comment the following line out AFTER you debug
        printArray(myArray); // useful for debugging

        // TODO: generate random values x and y, each of them with random.nextInt(m)
        x = random.nextInt(m);
        y = random.nextInt(m);


        resultIndex = sequentialSearch(myArray, x);
        // TODO if resultIndex is -1, print (x+" was not found by sequential search"), otherwise announce finding it with sequential search
        if (resultIndex == -1)
        {
            System.out.println(x+" was not found by sequential search");
        }
        java.util.Arrays.sort(myArray);    // only a sorted array can be used with binary search

        // TODO: commend the following line out AFTER you debug
        printArray(myArray); // useful for debugging

        resultIndex = binarySearch(myArray, y);
        // TODO if resultIndex is -1 print (y+" was not found by binary search")), otherwise announce finding it with binary search
        if (resultIndex == -1)
        {
            System.out.println(y+" was not found by binary search");
        }
    }
}