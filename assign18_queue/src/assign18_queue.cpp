//============================================================================
// Name        : assign18_queue.cpp
// Author      : aivanov
//
//in:
//8
//COME 5
//WORRY 1
//WORRY 4
//COME -2
//WORRY_COUNT
//COME 3
//WORRY 3
//WORRY_COUNT
//
//out:
//1
//2
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	const vector<string> cmds = {"WORRY", "QUIET", "COME", "WORRY_COUNT"};

	int N;
	cin>>N;

	vector<string> commands(N);
	vector<int> arguments(N);
	for (auto i = 0; i < N; i++){
    	auto& temp = commands[i];
		cin >> temp;
    	if (temp != cmds.back())
    		cin >> arguments[i];
    }

	vector<bool> queue;
	for (auto i = 0; i < commands.size(); i++){
		auto& cmd = commands[i];
		if (cmd == cmds[3]){
			cout<< count(begin(queue), end(queue), true) << endl;
			continue;
		}

		auto& arg = arguments[i];
		if (cmd == cmds[0]){
			queue[arg] = true;
			continue;
		}
		if (cmd == cmds[1]){
			queue[arg] = false;
			continue;
		}

		if (cmd == cmds[2]){
			if (arg > 0) {
				queue.resize(queue.size() + arg, false);
			}
			else if (arg < 0){
				queue.resize(queue.size() + arg);
			}
			continue;
		}
	}

	return 0;
}
