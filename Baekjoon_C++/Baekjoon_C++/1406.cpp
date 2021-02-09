#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	deque<char> left, right;
	string str; char exp; int M;
	cin >> str >> M;
	for (int i = 0; i < str.size(); i++) left.push_back(str[i]);
	while (M--) {
		cin >> exp;
		switch (exp)
		{
		case 'L':
			if (left.empty()) continue;
			right.push_front(left.back());
			left.pop_back();
			break;
		case 'D':
			if (right.empty()) continue;
			left.push_back(right.front());
			right.pop_front();
			break;
		case 'B':
			if (!left.empty()) left.pop_back();
			break;
		case 'P':
			cin >> exp;
			left.push_back(exp);
			break;
		}
	}
	str = "";
	while (!left.empty()) {
		str += left.front();
		left.pop_front();
	}
	while (!right.empty()) {
		str += right.front();
		right.pop_front();
	}
	cout << str;

	return 0;
}