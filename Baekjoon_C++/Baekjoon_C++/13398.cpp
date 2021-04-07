#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, n;
	cin >> N >> n;
	int ans = n, dp[2] = { n, };
	while (--N) {
		cin >> n;
		dp[1] = max(dp[1] + n, dp[0]);
		dp[0] = n + max(dp[0], 0);
		ans = max(ans, max(dp[0], dp[1]));
	}
	cout << ans;
}