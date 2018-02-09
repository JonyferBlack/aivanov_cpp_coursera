//============================================================================
// Name        : assign26_synonims.cpp
// Author      : aivanov
//============================================================================

#include <iostream>
#include <set>
#include <map>
#include <vector>

using namespace std;

int main() {
	const vector<string> known_commands = {"ADD", "COUNT", "CHECK"};
	map<string, set<string>> synonyms;

	int Q;
	cin >> Q;
	string command;
	for (auto i = 0; i < Q; i++){
		cin >> command;
		if (command == known_commands[0]){
			string word1, word2;
			cin >> word1;
			cin >> word2;
			set<string>  tmp = {word1, word2};
			synonyms[word1].insert(word2);
			synonyms[word2].insert(word1);
		}
		else if (command == known_commands[1]){
			string word;
			cin >> word;
			if (synonyms.count(word) > 0)
				cout << synonyms[word].size();
			else cout << 0;
			cout << endl;
		}
		else if(command == known_commands[2]) {
			string word1, word2;
			cin >> word1;
			cin >> word2;
			string result = "NO";
			if ((synonyms.count(word1) != 0 && synonyms[word1].count(word2) != 0) ||
			    (synonyms.count(word1) != 0 && synonyms[word1].count(word2) != 0)) result = "YES";
			cout << result <<endl;
		}
	}

	return 0;
}
