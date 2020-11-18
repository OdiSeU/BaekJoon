#include <iostream>
#include <string>
#include <queue>

#define MAX 100
using namespace std;

string map[MAX];
bool visited[2][MAX][MAX];
int dx[] = { 0, -1, 0, 1 }, dy[] = { -1, 0, 1, 0 };
int N, cnt[2] = { 0 , 0 };

struct Coord {
	int r, c;
};

void BFS(int type, int row, int col) {
	queue<Coord> q;
	char stdChar = map[row][col];
	cnt[type]++;
	visited[type][row][col] = true;
	q.push({ row, col });
	while (!q.empty()) {
		Coord now = q.front(); q.pop();
		for (int i = 0; i < 4; i++) {
			int r = now.r + dy[i], c = now.c + dx[i];
			if (0 <= r && r < N && 0 <= c && c < N && !visited[type][r][c]) {
				if (stdChar == map[r][c] || (type && stdChar != 'B' && map[r][c] != 'B')) {
					visited[type][r][c] = true;
					q.push({ r, c });
				}
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> map[i];
		for (int j = 0; j < N; j++) {
			visited[0][i][j] = 0;
			visited[1][i][j] = 0;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[0][i][j]) BFS(0, i, j);
			if (!visited[1][i][j]) BFS(1, i, j);
		}
	}
	cout << cnt[0] << ' ' << cnt[1];
	return 0;
}
