#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	char s[4];
	int N;
	cin >> N;
	while (N--) {
		cin >> s;
		cout << (s[0] - '0') + (s[2] - '0') << '\n';
	}
	return 0;
}