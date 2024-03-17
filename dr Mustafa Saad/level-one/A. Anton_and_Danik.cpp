#include <iostream>
using namespace  std;
/* Problem link : https://codeforces.com/contest/734/problem/A

   11- A. Anton and Danik
    status link : https://codeforces.com/contest/734/submission/251908131
*/
int main() {
    //  n (1 ≤ n ≤ 100 000) 

    int n = 0, a = 0, d = 0;
    string s = " ";

    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a++;
        else
            d++;
    }

    cout << (a > d ? "Anton" : a ==d ? "Friendship" : "Danik" ) ;

}
