#include <iostream>
#include <string>
using namespace std;

int main() {
	int sum = 0, stat = 1;
	string input, s = "";
	cin >> input;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == '-' || input[i] == '+') {
			sum += stat * stoi(s);
			s = "";
			if (input[i] == '-') stat = -1;
		}
		else s += input[i];
	}
	sum += stat * stoi(s);
	cout << sum;
	return 0;
}