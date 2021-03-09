#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 2; i*i <= N; i++) {
		while (!(N % i)) {
			cout << i << '\n';
			N /= i;
		}
	}
	if (N > 1) cout << N;
}