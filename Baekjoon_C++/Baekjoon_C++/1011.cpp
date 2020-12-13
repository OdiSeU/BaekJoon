#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int T, x, y, i, dist, ans, sq;
	cin >> T;
	while (T--) {
		cin >> x >> y;
		dist = y - x;
		i = (int)sqrt(dist);
		ans = i * 2;
		sq = i * i;
		if (dist == sq) ans--;
		else if (dist > sq + i) ans++;
		cout << ans << '\n';
	}
	return 0;
}