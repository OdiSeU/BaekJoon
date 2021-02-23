#include <iostream>
using namespace std;

int main() {
	int cnt2 = 0, cnt5 = 0, N, n;
	cin >> N;
	for (int i = 2; i <= N; i++) {
		for (n = i; !(n & 1); n /= 2, cnt2++);
		for (; !(n % 5); n /= 5, cnt5++);
	}
	cout << (cnt2 < cnt5 ? cnt2 : cnt5);
}