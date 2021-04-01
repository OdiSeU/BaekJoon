#include <iostream>
using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int n, i = 1, dp[3][2]{ 0, }, seq[3] = { 0, }, bbf, bf, now;
	cin >> n >> seq[i];
	dp[i][0] = seq[i];
	while (++i<=n) {
		bbf = (i - 2) % 3; bf = (i - 1) % 3; now = i % 3;
		cin >> seq[now];
		dp[now][0] = max(dp[bbf][0], dp[bbf][1] + seq[bf]) + seq[now];
		dp[now][1] = max(dp[bf][0], dp[bf][1]);
	}
	i--;
	cout << max(dp[i % 3][0], dp[i % 3][1]);
}