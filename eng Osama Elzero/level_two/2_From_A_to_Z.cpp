/* From A to Z
 problem link: https://www.codewars.com/kata/6512b3775bf8500baea77663
    input: "a-z"
    
    "a-z" ➞ "abcdefghijklmnopqrstuvwxyz"
    "h-o" ➞ "hijklmno"
    "Q-Z" ➞ "QRSTUVWXYZ"
    "J-J" ➞ "J"

Eng. Osama's solution, with the built-in function count():

    #include <string>
    using namespace std;
    string gimme_the_letters (const string& sp)
    {
    string result = "";
    for (int i = sp[0]; i <= sp[2]; i++)
    {
    result.push_back(char(i));
    }
    return result;
    }
*/
#include <iostream>
using namespace std;

string ranges(string sp) {
    int start = 0, end = 0, range = 0;
    start = (int)sp[0];  // Extract the beginning.
    end = (int)sp[2];    // Extract the end.
    range = end - start;  // Extract the loop rang.
    string result = "";

    for (short i = 0; i <= range; i++)  // <= needed last letter

        result += (char)start++; // Post-increment from the beginning and convert it to a character, and so on.

    return result;
}

int main() {
    string space = "a-z";
    string space1 = "h-o";
    string space2 = "Q-Z";
    string space3 = "J-J";

    cout << ranges(space) << "\n";
    cout << ranges(space1) << "\n";
    cout << ranges(space2) << "\n";
    cout << ranges(space3) << "\n";

}