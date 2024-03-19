/* Java
 Problem link : https://codeforces.com/contest/231/problem/A

   14 Team  CF231-D2-A
    status link : https://codeforces.com/contest/231/submission/252112186
*/

import java.util.Scanner;

public class A_Team {
    
    public static void main(String[] args) {
    Scanner in = new Scanner(System.in) ;        

        short n = 1 , result = 0;
        n = in.nextShort() ;  // problems numbers 

        int[][] team = new int[n][3] ;   // 3 in the team

        for (int i = 0; i < n; i++) {
            short tmp = 0 ;
            for (int j = 0; j < 3; j++) {

                team[i][j] = in.nextInt() ;

                if(team[i][j] == 1)    // calc Number of approvals
                    tmp++ ; 
                
            }
            if (tmp >= 2)   // if at least two are sure and agree will solv the p
                result++ ;

        }

        System.out.println(result);
    }
}