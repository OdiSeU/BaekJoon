#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, max = 0;
	cin >> N;
	vector<int> seq(N, 0), dp(N, 1);
	for (int i = 0; i < N; i++) {
		cin >> seq[i];
		for (int j = 0; j < i; j++) {
			if (seq[j] > seq[i] && dp[i] <= dp[j]) dp[i] = dp[j] + 1;
		}
		if (max < dp[i]) max = dp[i];
	}
	cout << max;
}