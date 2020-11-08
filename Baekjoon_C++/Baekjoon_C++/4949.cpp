#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string input, left;
	while (true) {
		stack<char> check;
		getline(cin, input);
		if (input == ".") break;
		int i = 0;
		while (input[i] != '.') {
			if (input[i] == '(' || input[i] == '[') check.push(input[i]);
			else if (input[i] == ')') {
				if (!check.empty() && check.top() == '(') check.pop();
				else {
					check.push('.');
					break;
				}
			}
			else if (input[i] == ']') {
				if (!check.empty() && check.top() == '[') check.pop();
				else {
					check.push('.');
					break;
				}
			}
			i++;
		}
		if (check.empty()) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}