/* Binary Search
    It must be ordered.
    It must be sorted from smallest to largest
 */
import java.util.Scanner ;

public class binarySearch {
    static int binarySearch(int[] arr, int sElement){

        int l = 0, h = 0, mid = 0 ;
        l = 0 ;  // low
        h = arr.length - 1 ; // assigning the high
        while (l <= h) {
            mid = (l + h ) / 2 ;


            if(arr[mid] == sElement)
                return mid;

            else if (arr[mid] < sElement)
                l = mid + 1 ;
            else
                h = mid - 1 ;
        }

        return -1 ;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in) ;
        int aSize = 0 , element = 0;

        System.out.print("Enter the size of the array: ");
        aSize = in.nextInt();

        int[] array = new int[aSize] ;

        for (short i = 0; i < aSize ; i++) {
            System.out.print("\nEnter the elements of the array, index " + i + ": ");
            array[i] = in.nextInt() ;
        }

        System.out.print("\nEnter the element to search: ");
        element = in.nextInt() ;

        if(binarySearch(array, element) != -1)
            System.out.println("Element found at index " + binarySearch(array, element));
        else
            System.out.print("element not found in the array");

    }
}