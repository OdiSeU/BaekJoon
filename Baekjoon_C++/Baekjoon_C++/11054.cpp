#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, max = 0;
	cin >> N;
	vector<int> seq(N);
	vector<vector<int>> dp(2, vector<int>(N, 0));
	for (int i = 0; i < N; i++) {
		cin >> seq[i];
		for (int j = 0; j < i; j++) {
			if (seq[j] < seq[i] && dp[0][i] < dp[0][j]) dp[0][i] = dp[0][j];
		}
		dp[0][i]++;
	}
	for (int i = N - 1; i >= 0; i--) {
		for (int j = N - 1; j > i; j--) {
			if (seq[j] < seq[i] && dp[1][i] < dp[1][j]) dp[1][i] = dp[1][j];
		}
		dp[1][i]++;
		if (max < dp[0][i] + dp[1][i]) max = dp[0][i] + dp[1][i];
	}
	cout << --max;
}