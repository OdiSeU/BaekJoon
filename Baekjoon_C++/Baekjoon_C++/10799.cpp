#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string input;
	stack<int> stk, tmp;
	int laser, cnt = 0;
	cin >> input;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == '(') stk.push(0);
		else {
			laser = stk.top();
			if (stk.top()) cnt += stk.top() + 1;
			else laser++;
			stk.pop();
			if (!stk.empty()) {
				laser += stk.top();
				stk.pop();
				stk.push(laser);
			}
		}
	}
	cout << cnt;
	return 0;
}