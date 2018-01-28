//============================================================================
// Name        : assign15_reverse_of_sequence.cpp
// Author      : aivanov
//
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

void Reverse(vector<int>& v){
	int tmp = 0;
	for (auto i=0; i < v.size()/2; ++i){
		tmp = v[i];
		v[i] = v[v.size()- i - 1];
		v[v.size()- i - 1] = tmp;
	}
}
//
//int main() {
//	vector<int> numbers = {1, 5, 3, 4, 2};
//	Reverse(numbers);
//
//	for (auto s : numbers){
//		cout<<s<<" ";
//	}
//
//	return 0;
//}
