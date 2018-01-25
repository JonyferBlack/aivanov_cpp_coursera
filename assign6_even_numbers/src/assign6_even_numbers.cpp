/*
 *
1 10	2 4 6 8 10
2 3	    2
9 11	10
 *
 2 2 2
 30000 30000 30000
 *
 1 30000
 *
 */

#include <iostream>
using namespace std;

int A,B;

bool IsEven(long number){
	return (number % 2) == 0;
}

int main() {
	cin>>A>>B;

	if (A==B && IsEven(A)){
		cout<<B;
		return 0;
	}

	for (auto i=A; i<=B; i++){
		if (IsEven(i)) cout<<i<<" ";
	}

	return 0;
}
