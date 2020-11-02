#include <iostream>
#include <string>
using namespace std;

int main() {
	int set[9] = { 0, }, max = 0;
	string input;
	cin >> input;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == '9' || input[i] == '6') {
			input[i] = '6';
			set[6] += 1;
		}
		else {
			set[input[i] - '0'] += 2;
		}
		if (set[input[i] - '0'] > max) max = set[input[i] - '0'];
	}
	cout << (max + 1) / 2;

	return 0;
}