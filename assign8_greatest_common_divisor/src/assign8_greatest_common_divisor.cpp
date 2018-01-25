//============================================================================
// Name        : assign8_greatest_common_divisor.cpp
// Author      : Ivanov Andrey
// Version     : 0.0.1
// Copyright   : Your copyright notice
// Programming Assignment: Наибольший общий делитель
//============================================================================
/*
 *
25 27	1
12 16	4
13 13	13
 *
 */

#include <iostream>
using namespace std;

long a, b;

int main() {
	cin>>a>>b;

	while (a!=0 and b!=0){
	    if (a > b)
	        a = a % b;
	    else
	        b = b % a;
	}

	cout<<a+b;

	return 0;
}
