#include <iostream>
#include <string>
using namespace std;

string stack = "";
string input = "";
int idx = 0;

int getValue() {
	int sum = 1;

	while (idx < input.size()) {
		int now;
		if (input[idx] == '(') {
			now = 2;
			stack += "(";
		}
		else if (input[idx] == '[') {
			now = 3;
			stack += "[";
		}
		else if (!stack.empty()) {
			if ((stack.back() == '(' && input[idx] == ')') || (stack.back() == '[' && input[idx] == ']')) {
				stack.erase(stack.length() - 1);
				idx++;
				return sum == 1 ? 1 : sum - 1;
			}
			else return 0;
		}
		else return 0;
		idx++;
		int next = getValue();
		if (next == 0) return 0;
		sum += now * next;
	}
	return stack.empty() ? sum - 1 : 0;
}

int main() {
	cin >> input;
	cout << getValue();
	return 0;
}