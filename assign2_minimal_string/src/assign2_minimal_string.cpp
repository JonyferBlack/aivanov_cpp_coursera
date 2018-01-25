#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> strings = {"", "", ""};
	cin>>strings[0]>>strings[1]>>strings[2];
	string result=strings[0];
	for (auto str : strings){
		if (str>result) continue;
		result = str;
	}
	cout << result << endl;
	return 0;
}
