//============================================================================
// Name        : assign16_reversed.cpp
// Author      : aivanov
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

vector<int> Reversed(const vector<int>& v){
	vector<int> result = v;
	Reverse(result);
	return result;
}
//
//
//int main() {
//	vector<int> numbers = {1, 5, 3, 4, 2};
//
//	for (auto x : Reversed(numbers)){
//		cout<<x<<" ";
//	}
//
//	return 0;
//}
