//============================================================================
// Name        : assign27_bus_stops_3.cpp
// Author      : aivanov
//============================================================================

#include <iostream>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	map<set<string>, int> buses_by_stops;
	string element;
	set<string> tmp;
	int length, last_number = 0;

	for (auto i = 0; i < N; i++){
		cin >> length;
		tmp.clear();
		for (auto i = 0; i < length; i++){
			cin >> element;
			tmp.insert(element);
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

