/*
 Problem link : https://codeforces.com/contest/231/problem/A

   14 Team  CF231-D2-A
    status link : https://codeforces.com/contest/231/submission/223721470
*/
#include <iostream>
using namespace std ;

int main(){
  short n = 1 , r = 0 , result = 0;

  cin >> n ;
  int t[n][3] ;

  for(int i = 0 ; i < n ; ++i){
    r = 0 ;
    for(int j = 0 ; j < 3 ; ++j){   // team m is 3
      cin >> t[i][j] ;
    }

    for(int j = 0 ; j < 3 ; ++j){
      if(t[i][j] == 1)       // calc Number of approvals
        r += 1 ;
    }

    if(r >= 2)  
      result += 1 ;  // if at least two are sure and agree will solve the p
    
  } 

  cout << result ;


  return 0;
}