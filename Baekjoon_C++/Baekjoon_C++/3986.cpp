#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, i, cnt = 0;
	string s;
	cin >> N;
	while (N--) {
		stack<char> stk;
		cin >> s;
		for (i = 0; i < s.length(); i++) {
			if (!stk.empty() && stk.top() == s[i]) stk.pop();
			else stk.push(s[i]);
		}
		if (stk.empty()) cnt++;
	}
	cout << cnt;
	return 0;
}