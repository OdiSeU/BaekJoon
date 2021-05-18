#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int T, M, N, X, Y, y, cnt;
	cin >> T;
	while (T--) {
		cin >> M >> N >> X >> Y;
		cnt = X;
		y = (X - 1) % N + 1;
		while (true) {
			if (y == Y) {
				cout << cnt << '\n';
				break;
			}
			if (cnt > M * N) {
				cout << -1 << '\n';
				break;
			}
			y = (y + M - 1) % N + 1;
			cnt += M;
		}
	}
}