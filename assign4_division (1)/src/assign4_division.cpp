/*
 *
    10 2 5
	 3 5 0
    11 0 Impossible
 *
    0 1000000 0
    1000000 0 Impossible
 *
    6 4 1
    10 4 2
 *
    999999 1000000 0
 */

#include <iostream>
using namespace std;

long A,B;

int main() {

	cin>>A>>B;

	if (B==0) {
		cout<<"Impossible";
		return 0;
	}

	cout<<(long)A/B;

	return 0;
}
