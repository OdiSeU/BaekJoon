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

long LCM(int a, int b) {
	return a / GCD(a, b) * b;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int T, a, b;
	cin >> T;
	while (T--) {
		cin >> a >> b;
		cout << LCM(a, b) << '\n';
	}
}