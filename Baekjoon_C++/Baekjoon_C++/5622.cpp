#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int dial[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 }, cnt = 0;
	string input;
	cin >> input;
	for (int i = 0; i < input.length(); i++) cnt += dial[input[i]-'A'];
	cout << cnt;

	return 0;
}