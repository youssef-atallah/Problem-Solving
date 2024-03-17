/*summary:
This problem involves comparing the weights of two bears,
 Limak and Bob. Limak triples his weight annually,
  while Bob doubles his weight.
  - The objective is to determine the number of years it takes for Limak to become heavier than Bob.

To address this, we iterate through each year,
- updating the weights of both bears accordingly. 
 -We continue this process until Limak's weight surpasses Bob's weight.
 - Once this condition is met, we output the number of years it took.

input: 
Initial weights of Limak and Bob are read from the input.

We track the number of years it takes for Limak to become strictly heavier than Bob.

output:
  number of years  .*/

/* Problem link : https://codeforces.com/contest/791/problem/A

   13- A. Bear and Big Brother
    status link : https://codeforces.com/contest/791/submission/251914443
*/
#include <iostream>
using namespace std ;

int main(){
    // a and b (1 ≤ a ≤ b ≤ 10)

    short a = 0 , b = 0 , t = 0;
    cin >> a >> b ;

    while (a <= b)
    {
        a *= 3 ;
        b *= 2 ;
        t++ ;
    }
    
    cout << t ;
}