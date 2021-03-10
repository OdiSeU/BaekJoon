#include <iostream>
using namespace std;

int main() {
	int n, bf2, bf1, now;
	cin >> n;
	bf2 = 1, now = bf1 = 3;
	for (int i = 2; i < n; i++) {
		now = (bf1 + bf2 * 2) % 10007;
		bf2 = bf1, bf1 = now;
	}
	cout << (n == 1 ? 1 : now);
}