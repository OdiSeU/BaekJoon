#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int N, M, minDist = 1000001;
int dx[] = { 0, -1, 0, 1 };
int dy[] = { -1, 0, 1, 0 };
vector<string> map;

struct Node {
	int row, col, cnt;
	bool chance;
};

void BFS() {
	queue<Node> q;
	Node now = { 0, 0, 1, true };
	map[0][0] = ' ';
	q.push(now);
	while (!q.empty()) {
		now = q.front();
		if (now.row == N - 1 && now.col == M - 1) break;
		for (int i = 0; i < 4; i++) {
			int r = now.row + dy[i], c = now.col + dx[i];
			if (0 <= r && r < N && 0 <= c && c < M) {
				if (map[r][c] == '0' || (map[r][c] == '-' && now.chance)) {
					q.push({ r, c, now.cnt + 1, now.chance });
					if (now.chance) map[r][c] = ' ';
					else map[r][c] = '-';
				}
				else if (map[r][c] == '1' && now.chance) {
					q.push({ r, c, now.cnt + 1, false });
					map[r][c] = ' ';
				}
			}
		}
		q.pop();
	}
	if (!q.empty()) minDist = now.cnt;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		map.push_back("");
		cin >> map[i];
	}
	BFS();
	cout << (minDist == 1000001 ? -1 : minDist);
	return 0;
}