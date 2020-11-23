#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int T, N, x1, y1, x2, y2, cx, cy, r, cnt;
	bool chk1, chk2;
	cin >> T;
	while (T--) {
		cin >> x1 >> y1 >> x2 >> y2 >> N;
		cnt = 0;
		while (N--) {
			cin >> cx >> cy >> r;
			chk1 = pow(x1 - cx, 2) + pow(y1 - cy, 2) < pow(r, 2);
			chk2 = pow(x2 - cx, 2) + pow(y2 - cy, 2) < pow(r, 2);
			if (chk1 != chk2) cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}