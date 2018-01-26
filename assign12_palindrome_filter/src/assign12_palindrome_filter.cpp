//============================================================================
// Name        : assign12_palindrome_filter.cpp
// Author      : aivanov
//
// abacaba, aba	5	abacaba
// abacaba, aba	2	abacaba, aba
// weew, bro, code	4	weew
// dobe, bro, code	4
//============================================================================

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool IsPalindrom(string word){
	for (auto i=0; i < word.length() / 2; i++){
		if (word[i] != word[word.length() - i - 1]) return false;
	}
	return true;
}

std::vector<string> PalindromFilter(std::vector<string> input, int minLength){
	std::vector<string> result;
	for (auto s : input){
		if (s.length() < minLength || !IsPalindrom(s)) continue;
        result.push_back(s);
	}
    return result;
}
//
//int main() {
//	vector<string> v = {"abacaba", "aba", "code"};
//	for (auto s : PalindromFilter(v, 5))
//		cout << s << " " << endl;
//	return 0;
//}
