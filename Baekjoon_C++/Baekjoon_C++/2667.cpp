#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;
int N, cnt = 0;
string map[25];
priority_queue<int, vector<int>, greater<int>> pq;
int dx[] = { 0, -1, 0, 1 };
int dy[] = { -1, 0, 1, 0 };

struct Coord {
	int row, col;
};

void BFS(int r, int c) {
	cnt++;
	int size = 1;
	queue<Coord> q;
	q.push({ r, c });
	map[r][c] = '0';
	while (!q.empty()) {
		Coord now = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			Coord next = { now.row + dy[i], now.col + dx[i] };
			if(0 <= next.row && next.row < N && 0 <= next.col && next.col < N) {
				if (map[next.row][next.col] == '1') {
					map[next.row][next.col] = '0';
					size++;
					q.push(next);
				}
			}
		}
	}
	pq.push(size);
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++) cin >> map[i];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == '1') BFS(i, j);
		}
	}
	cout << cnt << '\n';
	while (!pq.empty()) {
		cout << pq.top() << '\n';
		pq.pop();
	}
	return 0;
}