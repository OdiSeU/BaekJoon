#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, K;
	cin >> N >> K;
	vector<vector<int>> memoi(N+1, vector<int>(K+1));
	for (int i = 0; i <= N; i++) memoi[i][1] = 1;
	for (int j = 0; j <= K; j++) memoi[0][j] = 1;
	for (int i = 1; i <= N; i++) {
		for (int j = 2; j <= K; j++) {
			memoi[i][j] = (memoi[i - 1][j] + memoi[i][j - 1]) % 1000000000;
		}
	}
	cout << memoi[N][K];
}
