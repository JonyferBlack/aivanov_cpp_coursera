//============================================================================
// Name        : assign21_capitals_list.cpp
// Author      : aivanov
//============================================================================

#include <iostream>
#include <vector>
#include <map>

using namespace std;

string CHANGE_CAPITAL(map<string, string>& capital_by_country, const string& country, const string& capital){
	string result = "Country " + country + " hasn't changed its capital";
	if(capital_by_country.count(country) == 0){
		result = "Introduce new country " + country + " with capital " + capital;
	}else if(capital_by_country[country] != capital){
		result = "Country " + country + " has changed its capital from " + capital_by_country[country] + " to " + capital;
	}
	capital_by_country[country] = capital;
	return result;
}

string RENAME(map<string, string>& capital_by_country, const string& country, const string& new_country_name){

	if(country == new_country_name || capital_by_country.count(country) == 0 || capital_by_country.count(new_country_name) != 0){
		return "Incorrect rename, skip";
	}

	string capital = capital_by_country[country];
	capital_by_country.erase(country);
	capital_by_country[new_country_name] = capital;

	return "Country " + country + " with capital " + capital + " has been renamed to " + new_country_name;
}

string ABOUT(map<string, string>& capital_by_country, string country){
	if(capital_by_country.count(country) == 0) return "Country " + country + " doesn't exist";
	return "Country " + country + " has capital " + capital_by_country[country];
}

void DUMP(const map<string, string>& capital_by_country){
	if (capital_by_country.size() == 0) {
		cout << "There are no countries in the world";
		return;
	}
	for (auto& item : capital_by_country){
		cout << item.first + "/" + item.second << " ";
	}
}


int main() {
	const vector<string> known_commands = {"CHANGE_CAPITAL","RENAME","ABOUT","DUMP"};
	int Q;
	cin >> Q;

	map<string, string> capital_by_country;
	string arg1,arg2, command;
	for (auto i =0; i < Q; i++){
		cin >> command;
		if(command == known_commands[0]){
			cin >> arg1;
			cin >> arg2;
			cout << CHANGE_CAPITAL(capital_by_country, arg1, arg2) << endl;
		} else if(command == known_commands[1]){
			cin >> arg1;
			cin >> arg2;
			cout << RENAME(capital_by_country, arg1, arg2) << endl;
		} else if(command == known_commands[2]){
			cin >> arg1;
			cout << ABOUT(capital_by_country, arg1) << endl;
		} else if(command == known_commands[3]){
			DUMP(capital_by_country);
			cout << endl;
		}
	}

	return 0;
}
