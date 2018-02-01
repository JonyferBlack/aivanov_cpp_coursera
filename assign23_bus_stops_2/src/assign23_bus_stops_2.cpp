//============================================================================
// Name        : assign23_bus_stops_2.cpp
// Author      : aivanov
//============================================================================

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	map<vector<string>, int> buses_by_stops;
	vector<string> tmp;
	int length, last_number = 0;

	for (auto i = 0; i < N; i++){
		cin >> length;
		tmp.resize(length);
		for (auto& next : tmp){
			cin >> next;
		}
		if (buses_by_stops.count(tmp) != 0){
			cout << "Already exists for " << buses_by_stops[tmp] << endl;
			continue;
		}
		buses_by_stops[tmp] = (++last_number);
		cout << "New bus " << buses_by_stops[tmp] << endl;
	}

	return 0;
}
