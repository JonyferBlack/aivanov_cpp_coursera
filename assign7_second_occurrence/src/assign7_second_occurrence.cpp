/*
comfort	-1
freak -1
fuck -1
*
coffee	3
fulfill 3
*
car	-2
char -2
*
fchar5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5char5f 251
 *
 */

#include <iostream>
#include <string>
using namespace std;

const char symbol = 'f';
string sequence;

int main() {
	int occurances = 0;
	cin >> sequence;

	for (int index = 0; index < sequence.length(); index++){
		if (sequence[index] == symbol) occurances++;

		if (occurances == 2){
			cout<<index;
			break;
		}
	}

	if (occurances == 1){
		cout<<-1;
	}
	if (occurances == 0){
		cout<<-2;
	}

	return 0;
}
