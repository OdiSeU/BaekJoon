#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int K, n, sum = 0;
	stack<int> stk;
	cin >> K;
	while (K--) {
		cin >> n;
		if (n) stk.push(n);
		else stk.pop();
	}
	while (!stk.empty()) {
		sum += stk.top();
		stk.pop();
	}
	cout << sum;
	return 0;
}