#include <iostream>
#include <vector>
using namespace std ;

/* Problem link : https://codeforces.com/contest/677/problem/A

    A. Vanya and Fence
    status link : https://codeforces.com/contest/677/submission/251663670
*/

int main(){

    // first line inputs 
    short friendNums = 1 ;
    float fenceHeight = 0 ;
    cin >> friendNums >> fenceHeight ;

    vector<float> pHeigths ;

    int result = friendNums ;

    // second line with checking 
    for (int i = 0; i < friendNums; i++) {
        float temp = 0 ;
        cin >> temp ;

        pHeigths.push_back(temp) ;

        if(pHeigths.at(i) > fenceHeight)  
            result += 1 ;
    }
     
     cout <<  result ;
}