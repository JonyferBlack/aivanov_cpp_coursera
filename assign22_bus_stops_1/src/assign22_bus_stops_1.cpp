//============================================================================
// Name        : assign22_bus_stops_1.cpp
// Author      : aivanov
//============================================================================

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> BUSES_FOR_STOP(const map<string, vector<string>>& stops_by_bus, const string& stop){
	vector<string> result;
	for (auto& s_b_b : stops_by_bus){
		auto& stops = s_b_b.second;
		if (std::count(stops.begin(), stops.end(), stop) == 0) continue;
		result.push_back(s_b_b.first);
	}
	return result;
}

void STOPS_FOR_BUS(map<string, vector<string>>& stops_by_bus, string bus){
	vector<string> buses_f_stop;
	for (auto& stop : stops_by_bus[bus]){
		cout << "Stop " << stop <<": ";
		buses_f_stop = BUSES_FOR_STOP(stops_by_bus, stop);
		if (buses_f_stop.size() == 1 && buses_f_stop.back() == bus) cout << "no interchange";
		else {
			for (auto& line_number : buses_f_stop){
				if (line_number == bus)	continue;
				cout << line_number << " ";
			}
		}
		cout<<endl;
	}
}

void ALL_BUSES(const map<string, vector<string>>& stops_by_bus){
	for (auto& pair : stops_by_bus){
		cout << "Bus " << pair.first << ": ";
		for (auto& stop : pair.second){
			cout << stop << " ";
		}
		cout << endl;
	}
}

int main() {
	const vector<string> known_commands = {"NEW_BUS", "BUSES_FOR_STOP", "STOPS_FOR_BUS", "ALL_BUSES"};
	map<string, vector<string>> stops_by_bus;
	int Q;
	cin >> Q;

	string command;
	for (auto i = 0; i < Q; i++){
		cin >> command;
		if (command == known_commands[0]){
			int count;
			string bus;
			cin >> bus;
			cin >> count;
			vector<string> stops(count);
			for (auto& item : stops){
				cin >> item;
			}
			stops_by_bus[bus] = stops;
		} else if (command == known_commands[1]){
			string stop;
			cin >> stop;
			auto buses = BUSES_FOR_STOP(stops_by_bus, stop);
			if (buses.size() == 0) cout << "No stop";
			else {
				for (auto& bus : buses)
					cout << bus << " ";
			}
			cout<<endl;
		} else if (command == known_commands[2]){
			string bus;
			cin >> bus;

			if (stops_by_bus.count(bus) == 0) cout << "No bus";
			else STOPS_FOR_BUS(stops_by_bus, bus);

			cout << endl;
		} else if (command == known_commands[3]){
			if (stops_by_bus.size() == 0) cout << "No buses";
			else ALL_BUSES(stops_by_bus);

			cout << endl;
		}
	}

	return 0;
}
