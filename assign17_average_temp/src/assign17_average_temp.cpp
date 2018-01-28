//============================================================================
// Name        : assign17_average_temp.cpp
// Author      : aivanov
//
//in:
//5
//7 6 3 0 9
//out:
//3
//0 1 4
//============================================================================

#include <vector>
#include <iostream>
using namespace std;

int Average(const vector<int> sequence){
	int result = 0;
	for(auto& element : sequence){
    	result+=element;
    }
	return (result / sequence.size());
}

int GreaterThanCount(const vector<int> sequence, const int& number){
	int result = 0;
	for(auto& element : sequence){
    	if(element > number) ++result;
    }
	return result;
}

int main() {
	int N;
	cin>>N;

	vector<int> day_temps(N);
	for(auto& temp : day_temps){
    	cin>>temp;
    }

	int average = Average(day_temps);

	cout<<GreaterThanCount(day_temps, average)<<endl;

	for(auto i=0; i < day_temps.size(); i++){
    	if (day_temps[i] > average)
    		cout<<i<<" ";
    }

	return 0;
}
