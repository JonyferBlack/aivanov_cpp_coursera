//============================================================================
// Name        : assign10_factor.cpp
// Author      : aivanov
//
// 0    1
// 1	1
// -2	1
// 4	24
// 10   3628800
//
//============================================================================

#include <iostream>
using namespace std;

int Factorial(int number){
	if (number <= 1) return 1;
	return number * Factorial(number -1);
}

//int main() {
//	int number;
//	cin >> number;
//  cout << factorial(number);
//	return 0;
//}
