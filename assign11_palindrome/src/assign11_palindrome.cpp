//============================================================================
// Name        : assign11_palindrome.cpp
// Author      : aivanov
//
//   true
// madam	true
// gentleman	false
// X	true
// itiviti true
//============================================================================

#include <iostream>
#include <string>
using namespace std;

bool IsPalindrom(string word){
	for (auto i=0; i < word.length() / 2; i++){
		if (word[i] != word[word.length() - i - 1]) return false;
	}
	return true;
}

//int main() {
//	for (auto w : {" ","madam","gentleman","X", "itiviti"}){
//		cout<<w<<" "<<IsPalindrom(w)<<endl;
//	}
//	return 0;
//}
