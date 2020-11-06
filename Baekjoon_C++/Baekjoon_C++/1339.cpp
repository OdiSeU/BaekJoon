#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int n, sum = 0, alphaArr[26] = { 0, };
	string input;
	cin >> n;
	while (n--) {
		cin >> input;
		for (int digit = 1, i = input.length() - 1; i >= 0; i--, digit *= 10) alphaArr[input[i] - 'A'] += digit;
	}
	sort(alphaArr, alphaArr + 26, greater<int>());
	for (int i = 0; alphaArr[i] != 0; i++) sum += alphaArr[i] * (9 - i);

	cout << sum;

	return 0;
}