#include <iostream>
#include <string>
using namespace std;

string stack = "";
string input = "";
int idx = 0;

int getValue() {
	int now;
	if (input[idx] == '(') {
		now = 2;
		stack += "(";
		idx++;
	}
	else if (input[idx] == '[') {
		now = 3;
		stack += "[";
		idx++;
	}
	else return 0;
}

int main() {
	cin >> input;

	return 0;
}