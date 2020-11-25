#include <iostream>
#include <cstring>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	bool checkArr[26];
	string s;
	int N, cnt = 0, i;
	cin >> N;
	while (N--) {
		memset(checkArr, 0, sizeof(checkArr));
		cin >> s;
		char now = s[0];
		checkArr[now - 'a'] = true;
		for (i = 1; i < s.length(); i++) {
			if (now == s[i]) continue;
			if (checkArr[s[i] - 'a']) break;
			now = s[i];
			checkArr[now - 'a'] = true;
		}
		if (i == s.length()) cnt++;
	}
	cout << cnt;
	return 0;
}