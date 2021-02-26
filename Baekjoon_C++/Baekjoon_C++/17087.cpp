#include <iostream>
using namespace std;

int GCD(int a, int b) {
	int c;
	while (b > 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int ABS(int a) {
	return a > 0 ? a : -a;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, S, A, D;
	cin >> N >> S >> D;
	D = ABS(S - D);
	while (--N) {
		cin >> A;
		D = GCD(D, ABS(A - S));
		if (D == 1) break;
	}
	cout << D;
}