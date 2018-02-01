//============================================================================
// Name        : assign20_anagrams.cpp
// Author      : aivanov
//============================================================================

#include <iostream>
#include <map>


using namespace std;

map<char, int> BuildCharCounters(const string& word){
	map<char, int> result;
	for (auto& ch : word)
		result[ch]++;
	return result;
}

int main() {
	int N;
	cin>>N;

	string first, second, output="NO";
	for (auto i=0; i < N; i++){
		cin >> first;
		cin >> second;
		if (BuildCharCounters(first) == BuildCharCounters(second)) output = "YES";
		cout<< output << endl;
		output = "NO";
	}

	return 0;
}
