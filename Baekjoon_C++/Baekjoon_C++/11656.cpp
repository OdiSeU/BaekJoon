#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	string S;
	cin >> S;
	vector<string> dict;
	for (int i = 0; i < S.size(); i++) dict.push_back(S.substr(i));
	sort(dict.begin(), dict.end());
	for (int i = 0; i < dict.size(); i++) cout << dict[i] << '\n';
}