#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	string input, result = "";
	cin >> input;
	int len = input.size();
	switch (len % 3) {
	case 1: result = input[0]; break;
	case 2: result = (input[0] - '0') * 2 + input[1];
	}
	for (int i = len % 3; i < len; i += 3) {
		result.push_back((input[i] - '0') * 4 + (input[i+1] - '0') * 2 + input[i+2]);
	} 
	cout << result;
}