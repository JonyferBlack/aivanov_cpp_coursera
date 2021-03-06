//============================================================================
// Name        : assign9_binary_numbers.cpp
// Author      : aivanov
//
// 0 0
// 2147483647 ‭1111111111111111111111111111111‬
// 5	101
// 32	100000
// 1	1
//22221 ‭0101011011001101‬
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

int N, modulo;
std::vector<bool> binary_number;

int main() {

	cin>>N;

	if (N == 1) {
		cout<<1;
		return 0;
	}

	if (N == 0) {
		cout<<0;
		return 0;
	}

	while (N > 0){
		binary_number.push_back(N % 2);
		N /= 2;
	}

	for (int i=binary_number.size()-1; i >= 0; i--){
		cout<<(int)binary_number[i];
	}

	return 0;
}
