#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int K, W, H, minDist = 1000001;
int dx[] = { 0, -1, 0, 1 };
int dy[] = { -1, 0, 1, 0 };
int dx2[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int dy2[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
vector<vector<char>> map;

struct Node {
	int row, col, cnt;
	char chance;
};

int BFS() {
	queue<Node> q;
	Node now = { 0, 0, 0, K + 'A' };
	map[0][0] = K + 'A';
	q.push(now);
	int a = 0;
	while (!q.empty()) {
		now = q.front();
		if (now.row == H - 1 && now.col == W - 1) return now.cnt;
		if (now.chance > 'A') {
			for (int i = 0; i < 8; i++) {
				int r = now.row + dy2[i], c = now.col + dx2[i];
				if (0 <= r && r < H && 0 <= c && c < W) {
					if (map[r][c] != '1' && map[r][c] < now.chance - 1) {
						q.push({ r, c, now.cnt + 1, now.chance - 1 });
						map[r][c] = now.chance - 1;
					}
				}
			}
		}
		for (int i = 0; i < 4; i++) {
			int r = now.row + dy[i], c = now.col + dx[i];
			if (0 <= r && r < H && 0 <= c && c < W) {
				if (map[r][c] != '1' && map[r][c] < now.chance) {
					q.push({ r, c, now.cnt + 1, now.chance });
					map[r][c] = now.chance;
				}
			}
		}
		q.pop();
	}
	return -1;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> K >> W >> H;
	for (int i = 0; i < H; i++) {
		map.push_back(vector<char>(W));
		for (int j = 0; j < W; j++) {
			cin >> map[i][j];
		}
	}
	cout << BFS();
	return 0;
}