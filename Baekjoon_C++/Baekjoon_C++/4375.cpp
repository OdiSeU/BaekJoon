#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int n;
	while (cin >> n) {
		for (int i = 1 % n, j = 1; ; i = (i * 10 + 1) % n, j++) {
			if (i == 0) {
				cout << j << '\n';
				break;
			}
		}
	}
	return 0;
}