#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	string S;
	while (getline(cin, S)) {
		int cnts[4] = { 0, };
		for (int i = 0; i < S.size(); i++) {
			if (S[i] == ' ') cnts[3]++;
			else if ('0' <= S[i] && S[i] <= '9') cnts[2]++;
			else if ('A' <= S[i] && S[i] <= 'Z') cnts[1]++;
			else cnts[0]++;
		}
		for (int i = 0; i < 4; i++) cout << cnts[i] << ' ';
		cout << '\n';
	}
}