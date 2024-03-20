/* Linear Search
 linear or sequential search

 */
import java.util.Scanner ;

public class linear_or_sequential_Search {
    static int linearSearch(int[] arr, int sElement){
        // Loop through the entire array, checking if the target element matches any other array element,
        // and return the index if a match is found
        for (short i = 0;  i < arr.length ; ++i) {
            if(sElement == arr[i])
                return i ;
        }

        return -1 ;
    }

    public static void main(String[] args) {
       /* Enter the size of the array: 5
        Enter the elements of the array:
        10 23 5 14 8
        Enter the element to search: 14
        Element found at index 3         */

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

        if(linearSearch(array, element) != -1)
            System.out.println("Element found at index " + linearSearch(array, element));
        else
            System.out.print("element not found in the array");

    }
}