#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int cnts[26] = { 0, };
	string S;
	cin >> S;
	for (int i = 0; i < S.size(); i++) cnts[S[i] - 'a']++;
	for (int i = 0; i < 26; i++) cout << cnts[i] << ' ';
}