#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, M, ans = 0;
	cin >> N >> M;
	vector<string> map(N);
	for (int i = 0; i < N; i++) cin >> map[i];
	for (int r = 0; r < N - ans; r++) {
		for (int c = 0; c < M - ans; c++) {
			for (int i = ans; r + i < N && c + i < M; i++) {
				if (r + i >= N || c + i >= M) break;
				if (map[r][c] == map[r + i][c] &&
					map[r][c] == map[r][c + i] &&
					map[r][c] == map[r + i][c + i]) ans = i;
			}
		}
	}
	cout << (ans + 1) * (ans + 1);
	return 0;
}