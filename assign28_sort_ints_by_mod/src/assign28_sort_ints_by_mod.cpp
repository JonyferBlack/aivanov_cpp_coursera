//============================================================================
// Name        : assign28_sort_ints_by_mod.cpp
// Author      : aivanov
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_vector(const vector<int>& v) {
	for (const auto& item : v)
		cout << item << " ";
}

int main() {
	int N;
	cin >> N;
	vector<int> v(N);
	for (auto& item : v) {
		cin >> item;
	}
	sort(begin(v), end(v), [](int a, int b) {return abs(a) < abs(b);});
	print_vector(v);
	return 0;
}
