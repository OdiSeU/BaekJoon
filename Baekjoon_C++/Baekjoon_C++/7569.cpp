#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<vector<vector<int>>> box;
int tomato = 0, cntDay, maxDay = 0;

struct Vec3d {
	int h, n, m;
};
queue<Vec3d> getQueue(queue<Vec3d> q) {
	queue<Vec3d> next;
	while (!q.empty()) {
		Vec3d now = q.front(); q.pop();
		box[now.h][now.n][now.m] = 1;
		tomato--;
		if (now.m - 1 >= 0 && box[now.h][now.n][now.m - 1] == 0) {
			next.push({ now.h, now.n, now.m - 1 });
			box[now.h][now.n][now.m - 1] = 1;
		}
		if (now.m + 1 < box[0][0].size() && box[now.h][now.n][now.m + 1] == 0) {
			next.push({ now.h, now.n, now.m + 1 });
			box[now.h][now.n][now.m + 1] = 1;
		}
		if (now.n - 1 >= 0 && box[now.h][now.n - 1][now.m] == 0) {
			next.push({ now.h, now.n - 1, now.m });
			box[now.h][now.n - 1][now.m] = 1;
		}
		if (now.n + 1 < box[0].size() && box[now.h][now.n + 1][now.m] == 0) {
			next.push({ now.h, now.n + 1, now.m });
			box[now.h][now.n + 1][now.m] = 1;
		}
		if (now.h - 1 >= 0 && box[now.h - 1][now.n][now.m] == 0) {
			next.push({ now.h - 1, now.n, now.m });
			box[now.h - 1][now.n][now.m] = 1;
		}
		if (now.h + 1 < box.size() && box[now.h + 1][now.n][now.m] == 0) {
			next.push({ now.h + 1, now.n, now.m });
			box[now.h + 1][now.n][now.m] = 1;
		}
	}
	return next;
}

void BFS(Vec3d pos) {
	int cntDay = 0;
	queue<Vec3d> q;
	q.push(pos);
	tomato++;
	while (true) {
		q = getQueue(q);
		if (q.empty()) break;
		cntDay++;
	}
	if (maxDay < cntDay) maxDay = cntDay;
}

int main() {
	int M, N, H;
	bool isDone = true;
	queue<Vec3d> q;
	scanf_s("%d%d%d", &M, &N, &H);
	for (int i = 0; i < H; i++) {
		box.push_back(vector<vector<int>>());
		for (int j = 0; j < N; j++) {
			box[i].push_back(vector<int>());
			for (int k = 0; k < M; k++) {
				box[i][j].push_back(0);
				scanf_s("%d", &box[i][j][k]);
				if (box[i][j][k] == 0) {
					isDone = false;
					tomato++;
				}
				if (box[i][j][k] == 1) q.push({ i, j, k });
			}
		}
	}
	if (isDone) printf("0");
	else {
		while (!q.empty()) {
			BFS(q.front());
			q.pop();
		}
		if (tomato > 0) printf("-1");
		else printf("%d", maxDay);
	}

	return 0;
}