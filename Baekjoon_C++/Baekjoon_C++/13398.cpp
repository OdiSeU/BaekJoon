#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, n, ans, sel, no = 0;
	cin >> N >> n;
	ans = sel = n;
	while (--N) {
		cin >> n;
		no = max(no + n, sel);
		sel = n + max(sel, 0);
		ans = max(ans, max(no, sel));
	}
	cout << ans;
}