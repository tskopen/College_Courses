/**************************************************************************

 * @By: Thor Kopenkoskey

 * @Lab: 23

 * @CSE 1001 Fund Software, Fall 2025

 * @Date: April 14

 * @Description: Test binary search
 * **************************************************************************/

import org.junit.jupiter.api.*;

class BinarySearchTest {
  int[]haystack = {2,4,5,7,10,12,14,18,21,23,25,26,29,30,32,35,45,51,56,62,64,66,79,80,83};
  @Test // Try to cover all cases: We test a center, and the two extreme elements 
  void testFoundBinarySearch() {
     Assertions.assertEquals(3, BinarySearch.binarySearch(haystack,7));
     Assertions.assertEquals(0, BinarySearch.binarySearch(haystack,2));
     Assertions.assertEquals(24, BinarySearch.binarySearch(haystack,83));
  }
  @Test  // Here we test missing values from before, in-between & after the list of numbers
  void testFailBinarySearch() {
    Assertions.assertEquals(-1, BinarySearch.binarySearch(haystack,1));
    Assertions.assertEquals(-1, BinarySearch.binarySearch(haystack,27));
    Assertions.assertEquals(-1, BinarySearch.binarySearch(haystack,84));
  }
}
