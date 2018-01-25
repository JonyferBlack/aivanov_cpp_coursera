/*
100 110 120 5 10	100
115 110 120 5 10	109.25
150 110 120 5 12.5	131.25
 *
100 100 100 50 10   100
 *
 *
 */

#include <iostream>
using namespace std;

double N,A,B,X,Y;

int main() {
	cin>>N>>A>>B>>X>>Y;

	auto finalDiscount = 0.0;
	if (N>A){
		finalDiscount = X;
	}
	if (N>B){
		finalDiscount = Y;
	}

	finalDiscount = finalDiscount/100;

	cout<<(N*(1.0-finalDiscount));
	return 0;
}
