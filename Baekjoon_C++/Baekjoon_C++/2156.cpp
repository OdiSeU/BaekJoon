#include <iostream>
using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int dp[3] = { 0, }, seq[3] = { 0, };
	int n, i = 1, bf = 0, now = 1, bbf = 2, tmp;
	cin >> n >> seq[i];
	dp[i] = seq[i];
	while (++i<=n) {
		tmp = bbf; bbf = bf; bf = now; now = tmp;
		cin >> seq[now];
		dp[now] = max(max(dp[bbf], dp[now] + seq[bf]) + seq[now], dp[bf]);
	}
	cout << dp[now];
}