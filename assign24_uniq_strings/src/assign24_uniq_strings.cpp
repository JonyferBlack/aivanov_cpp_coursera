//============================================================================
// Name        : assign24_uniq_strings.cpp
// Author      : aivanov
//============================================================================

#include <set>
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	set<string> m_set;

	string tmp;
	for (auto i = 0; i < N; i++){
		cin >> tmp;
		m_set.insert(tmp);
	}

	cout << m_set.size();
	return 0;
}
