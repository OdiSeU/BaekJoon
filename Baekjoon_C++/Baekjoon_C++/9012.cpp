#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int T;
	bool isRight;
	string s;
	cin >> T;
	while (T--) {
		stack<char> stk;
		isRight = true;
		cin >> s;
		if (s.length() & 1) isRight = false;
		else {
			for (int i = 0; i < s.length(); i++) {
				if (s[i] == '(') stk.push('(');
				else if (stk.empty()) {
					isRight = false;
					break;
				}
				else stk.pop();
			}
		}
		if (!stk.empty()) isRight = false;
		cout << (isRight ? "YES" : "NO") << '\n';
	}
	return 0;
}