/* Sum of array singles
	problem link: https://www.codewars.com/kata/59f11118a5e129e591000134

	For example, repeats([4,5,7,5,4,8]) = 15 because only the numbers 7 and 8 occur once,
	 and their sum is 15. Every other number occurs


	 Eng. Osama's solution, with the built-in function count():
	int repeats(vector<int> v) {
	int result = 0;

	for(int num : v)
	{
		if (count(v.begin(), v.end(), num) == 1)
			result += num;
	}
	return result;
}

*/
#include <iostream>
#include <vector>
using namespace std;

int repeats(vector<int> v) {
	int result = 0;
	for (int i = 0; i < v.size() - 1; ++i) {

		if (v.at(i) != 0) // if the index 0 needless |
			for (int j = i; j < v.size() - 1; ++j) {

				if (v.at(i) == v.at(j + 1)) { // If we find a repeated number,
					v.at(i) = 0;              //  we will set it to zero, 
					v.at(j + 1) = 0;          // and any other numbers that are identical to it will also be set to zero
				}

			}


	}
	// Calculate the numbers that do not result in zero (i.e, those nums that are not repeated)
	for (int i = 0; i < v.size(); ++i)
		result += v.at(i);


	return result;
}

int main() {
	vector<int> testVector = { 9, 10, 19, 13, 19, 13 };
	vector<int> testVector1{ 4,5,7,5,4,8 };
	vector<int> testVector2{ 16, 0, 11, 4, 8, 16, 0, 11 };
	vector<int> testVector3{ 5, 17, 18, 11, 13, 18, 11, 13 };

	cout << "Sum of repeated elements: " << repeats(testVector) << "\n";
	cout << "Sum of repeated elements: " << repeats(testVector1) << "\n";
	cout << "Sum of repeated elements: " << repeats(testVector2) << "\n";
	cout << "Sum of repeated elements: " << repeats(testVector3) << "\n";

	return 0;
}


