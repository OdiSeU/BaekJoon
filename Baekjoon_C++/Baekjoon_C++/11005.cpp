#include <iostream>
using namespace std;

void transNum(long long N, int B) {
	if (N) {
		transNum(N / B, B);
		int x = N % B;
		if (x > 9) cout << char('A'+ x - 10);
		else cout << x;
	}
}

int main() {
	long long N;
	int B;
	cin >> N >> B;
	transNum(N, B);
}