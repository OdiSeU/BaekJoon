#include <iostream>
#include <string>
#include <queue>
using namespace std;

int dx[] = { 0, -1, 0, 1 }, dy[] = { -1, 0, 1, 0 };

struct Coord {
	int r, c, t;
};

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, M, cnt = 0;
	string map[100];
	queue<Coord> q;
	Coord now = { 0,0,0 };
	cin >> N >> M;
	for (int i = 0; i < N; i++) cin >> map[i];
	q.push(now);
	map[0][0] = 0;
	while (!q.empty()) {
		now = q.front(); q.pop();
		cnt++;
		if (now.r == N - 1 && now.c == M - 1) break;
		for (int i = 0; i < 4; i++) {
			int r = now.r + dy[i], c = now.c + dx[i];
			if (0 <= r && r < N && 0 <= c && c < M) {
				if (map[r][c] == '1') {
					map[r][c] = '0';
					q.push({ r, c, now.t + 1});
				}
			}
		}
	}
	cout << now.t+1;

	return 0;
}