#include <iostream>
using namespace std;

pair<int, int> getZero(int n) {
	int cnt2 = 0, cnt5 = 0;
	for (long long i = 2; i <= n; i *= 2) cnt2 += n / i;
	for (long long i = 5; i <= n; i *= 5) cnt5 += n / i;
	return { cnt2, cnt5 };
}

int main() {
	int N, M;
	cin >> N >> M;
	pair<int, int> n = getZero(N);
	pair<int, int> nm = getZero(N - M);
	pair<int, int> m = getZero(M);
	N = n.first - nm.first - m.first;
	M = n.second - nm.second - m.second;
	cout << (N < M ? N : M);
}