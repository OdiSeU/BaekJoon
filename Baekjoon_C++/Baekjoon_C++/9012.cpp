#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int T, cnt;
	string s;
	cin >> T;
	while (T--) {
		cin >> s;
		cnt = 0;

		if (s.length() & 1) cnt = -1;
		else {
			for (int i = 0; i < s.length() && cnt >= 0; i++) {
				s[i] == '(' ? cnt++ : cnt--;
			}
		}
		cout << (cnt ? "NO" : "YES") << '\n';
	}
	return 0;
}