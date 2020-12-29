#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	double values[26], N, result = 0;
	stack<double> stk;
	string exp;
	cin >> N >> exp;
	for (int i = 0; i < N; i++) cin >> values[i];
	for (int i = 0; i < exp.length(); i++) {
		if ('A' <= exp[i] && exp[i] <= 'Z') stk.push(values[exp[i] - 'A']);
		else {
			double x, y, z = 0;
			y = stk.top(); stk.pop();
			x = stk.top(); stk.pop();
			switch(exp[i]) {
			case '+':
				z = x + y; break;
			case '-':
				z = x - y; break;
			case '*':
				z = x * y; break;
			case '/':
				z = x / y; break;
			}
			stk.push(z);
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << stk.top();
	return 0;
}