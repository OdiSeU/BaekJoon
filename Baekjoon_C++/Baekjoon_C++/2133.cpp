#include <iostream>
using namespace std;

int main() {
	int N, dp[31] = { 1, 0, 3 };
	cin >> N;
	for (int i = 4; i <= N; i += 2) {
		dp[i] = dp[i - 2] * 3;
		for (int j = 0; j <= i - 4; j += 2) {
			dp[i] += dp[j] * 2;
		}
	}
	cout << dp[N];
}