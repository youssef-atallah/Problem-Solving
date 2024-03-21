
/* Alphabet Symmetry

  Problem Link: https://www.codewars.com/kata/59d9ff9f7905dfeed50000b0

    input: ["abode","ABc","xyzD"]
    output: [4, 3, 1] */

/* Problem Solution
public class Solution{
    public static int[] solve(String[] arr){
        int[] result = new int[arr.length] ;

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length(); j++) {
                char l = arr[i].charAt(j) ;

                if( (int)l  == 65 + j || (int)l  == 97 + j  )
                    result[i] += 1 ;
            }
        }

      return result ;

    }
}
 */

 import java.util.Scanner ;
 public class Alphabet_Symmetry {
     public static void main(String[] args) {
         Scanner in = new Scanner(System.in);
         // solve(["abode","ABc","xyzD"]) = [4, 3, 1]
 
         String[] arr = new String[3] ;  // Suppose this length (3) matches our example above.
         int[] result = new int[3] ;
         // Taking our example above
         for (int i = 0; i < 3; i++) {
             arr[i] = in.next() ;
         }
 
         // the solution
         for (int i = 0; i < 3; i++) {
             for (int j = 0; j < arr[i].length(); j++) {
                 char l = arr[i].charAt(j) ;  // access the fist element in the first index
 
                 // Convert the letter to its ASCII code and compare it with its position in the English order
                 if( (int)l  == 65 + j || (int)l  == 97 + j  )
                     result[i] += 1 ;
             }
         }
 
         for (int i = 0; i < 3; i++) {
             System.out.print(result[i] + " ");
         }
 
     }
 }