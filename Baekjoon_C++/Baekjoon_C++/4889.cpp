#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int cnt, t = 0;
	string s;
	while (++t) {
		stack<char> stk;
		cnt = 0;
		cin >> s;
		if (s[0] == '-') break;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '}') {
				if (stk.empty()) {
					stk.push('{');
					cnt++;
				}
				else stk.pop();
			}
			else stk.push('{');
		}
		cnt += stk.size() / 2;
		cout << t << ". " << cnt << '\n';
	}
	return 0;
}