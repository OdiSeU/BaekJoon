#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int N, M, map[300][300];
bool visit[300][300];
int dx[] = { 0, -1, 0, 1 }, dy[] = { -1,0 ,1, 0 };

struct Ice {
	int r, c, h;
};

bool BFS(queue<Ice> q) {
	int cnt = 0;
	queue<Ice> tmp;
	Ice now = q.front();
	memset(visit, 0, sizeof(visit));
	tmp.push(now);
	visit[now.r][now.c] = true;
	while (!tmp.empty()) {
		now = tmp.front(); tmp.pop();
		cnt++;
		for (int j = 0; j < 4; j++) {
			int r = now.r + dy[j], c = now.c + dx[j];
			if (0 <= r && r < N && 0 <= c && c < M) {
				if (map[r][c] && !visit[r][c]) {
					visit[r][c] = true;
					tmp.push({ r, c });
				}
			}
		}
	}
	if (cnt == q.size()) return true;
	else return false;
}

void nextYear(queue<Ice>* q) {
	int size = q->size();
	for (int i = 0; i < size; i++) {
		Ice now = q->front(); q->pop();
		int water = 0;
		for (int j = 0; j < 4; j++) {
			int r = now.r + dy[j], c = now.c + dx[j];
			if (0 <= r && r < N && 0 <= c && c < M) {
				if (!map[r][c]) water++;
			}
		}
		now.h = now.h - water < 0 ? 0 : now.h - water;
		q->push(now);
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	queue<Ice> q;
	int cnt = 0;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
			if (map[i][j]) q.push({ i, j, map[i][j] });
		}
	}
	while (BFS(q)) {
		cnt++;
		nextYear(&q);
		int size = q.size();
		for (int i = 0; i < size; i++) {
			Ice now = q.front(); q.pop();
			map[now.r][now.c] = now.h;
			if (now.h) q.push(now);
		}
		if (q.empty()) {
			cout << 0;
			return 0;
		}
	}
	cout << cnt;
	return 0;
}