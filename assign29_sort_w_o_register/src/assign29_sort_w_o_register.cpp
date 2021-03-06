//============================================================================
// Name        : assign29_sort_w_o_register.cpp
// Author      : aivanov
//============================================================================

#include <iostream>
#include <vector>
#include <locale>
#include <algorithm>

using std::string;
using std::cin;
using std::cout;
using std::vector;

string tolower(const string& s) {
	string result = s;
	for (auto& ch : result)
		ch = std::tolower(ch);
	return result;
}

int main() {
	int n;
	cin >> n;

	vector<string> v(n);
	for (auto& i : v) {
		cin >> i;
	}

	sort(begin(v), end(v), [](const string& a, const string& b) {
		return tolower(a) < tolower(b);
	});

	for (const auto& i : v) {
		cout << i << " ";
	}

	return 0;
}
