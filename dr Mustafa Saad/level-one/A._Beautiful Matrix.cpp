/* Problem link : https://codeforces.com/contest/263/problem/A

   15 Beautiful Matrix
    status link: https://codeforces.com/contest/263/submission/252125896

    old solution & not good: https://codeforces.com/contest/263/submission/229339352 
*/
#include <iostream>
using namespace std;

int matrix(int m[5][5]) {
    int result = 0;
    if (m[2][2] == 1) // if in the middle 
        return 0;

    for (short i = 0; i < 5; i++)
    {
        for (short j = 0; j < 5; j++) {
            // if the row less or greater than the middle row
            if (m[i][j] == 1) {   // when we found the n 1

                if(i < 2)    // if the row is one or two: 2 - row
                    result += 2 - i;
                else                   
                     result += i - 2;       // if 3, 4, 5  row - 2

                // if the Colomn less or greater than the middle colomn
                if (j < 2)
                    result += 2 - j;
                else
                    result += j - 2;
                
            }
        }

    }

    return result;
}

int main() {
    int arr[5][5];

    for (short i = 0; i < 5; i++)
    {
        for (short j = 0; j < 5; j++)
            cin >> arr[i][j];
    }

    cout << matrix(arr);


}