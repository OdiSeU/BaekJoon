#include <iostream>
using namespace std;

void hanoi(int n, int from, int mid, int to) {
	if (n == 1) {
		cout << from << ' ' << to << '\n';
		return;
	}
	hanoi(n - 1, from, to, mid);
	cout << from << ' ' << to << '\n';
	hanoi(n - 1, mid, from, to);
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N;
	cin >> N;
	cout << (1 << N) - 1 << '\n';
	hanoi(N, 1, 2, 3);
	return 0;
}