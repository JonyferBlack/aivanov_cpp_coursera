//============================================================================
// Name        : assign19_mounthly_deals.cpp
// Author      : aivanov
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void Add(vector<vector<string>>& data, string s, int i){
	data[i-1].push_back(s);
}

void Next(vector<vector<string>>& data, int& currentMounth, const vector<int>& dayNumbers){
	if (currentMounth == 11) currentMounth = 0;
	else currentMounth++;
	int nextDaysCount = dayNumbers[currentMounth];

	vector<vector<string>> delta;
	if (data.size() > nextDaysCount){
		for (auto i = data.size() - (data.size() - nextDaysCount); i < data.size(); i++){
			delta.push_back(data[i]);
		}
		data.resize(nextDaysCount);
		for(auto& s : delta){
			data[nextDaysCount - 1].insert(end(data[nextDaysCount - 1]), begin(s), end(s));
		}
	}
	else {
		data.resize(nextDaysCount);
	}
}

void Dump(const vector<vector<string>>& data, const int& i){
	cout << data[i-1].size() << " ";
	for (auto& s : data[i-1]){
		cout << s << " ";
	}
	cout<<endl;
}

int main() {
	const vector<int> dayNumbers = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int currentMounth = 0;
	vector<vector<string>> deals(dayNumbers[currentMounth]);

	int Q;
	cin >> Q;

	string command;
	string s;
	int x;
	for (auto i = 0; i < Q; i++){
		cin >> command;
		if (command == "ADD"){
			cin >> x;
			cin >> s;
			Add(deals, s, x);
		}
		if (command == "DUMP"){
			cin >> x;
			Dump(deals, x);
		}
		if (command == "NEXT"){
			Next(deals, currentMounth, dayNumbers);
		}
	}


	map<int, string> m = {{1, "odd"}, {2, "even"}, {1, "one"}};
	m[2] = "two";
	m.erase(1);
	m[3] = "three";
	m.erase(4);
	m[5] = "five";
	cout << m.size();
	return 0;
}
