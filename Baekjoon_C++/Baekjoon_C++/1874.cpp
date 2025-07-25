#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Stack {
private:
	int n = 1;
	stack<int> num;
	string hist = "";
public:
	int now() {
		return n;
	}
	int top() {
		if (num.empty()) return 0;
		else return num.top();
	}
	void push() {
		num.push(n++);
		hist += "+\n";
	};
	void pop() {
		num.pop();
		hist += "-\n";
	}
	void printHist() {
		cout << hist;
	}
};

int main() {
	int n;
	queue<int> want;
	Stack stk;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		want.push(input);
	}
	while (!want.empty()) {
		if (want.front() > stk.top()) {
			if (want.front() < stk.now()) {
				cout << "NO";
				return 0;
			}
			stk.push();
		}
		else {
			if (want.front() == stk.top()) want.pop();
			stk.pop();
		}
	}
	stk.printHist();
	return 0;
}