#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	string input, result = "";
	cin >> input;
	for (int i = 0; i < input.length(); i++)
		if ('A' <= input[i] && input[i] <= 'Z')
			result += input[i];
	cout << result;
	return 0;
}