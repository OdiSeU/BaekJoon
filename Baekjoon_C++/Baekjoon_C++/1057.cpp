#include <iostream>
using namespace std;

int main() {
	int N, a, b, cnt = 1;
	cin >> N >> a >> b;
	a--; b--;
	while (a / 2 != b / 2) {
		a /= 2;
		b /= 2;
		cnt++;
	}
	cout << cnt;

	return 0;
}