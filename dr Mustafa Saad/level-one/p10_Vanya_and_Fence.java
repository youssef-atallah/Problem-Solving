
import java.util.Scanner ;

/* Problem link : https://codeforces.com/contest/677/problem/A

    A. Vanya and Fence
    status link : https://codeforces.com/contest/677/submission/251667359
*/
public class p10_Vanya_and_Fence {
    public static void main(String[] args ){
        Scanner input = new Scanner(System.in) ;

        short n = input.nextShort() ;
        float h = input.nextFloat() ;
        short result = 0 ;

        int[] persons = new int[n] ;

        result = n ;
        for(int i = 0 ; i < n ; ++i){
            persons[i] = input.nextInt() ;

            if(persons[i] > h)
                result += 1 ;

        }

        System.out.println(result);

    }
}