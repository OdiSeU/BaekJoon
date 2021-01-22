#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int cnt = 0;
vector<vector<int>> graph;
vector<bool> visited;

void BFS() {
	queue<pair<int, int>> q;
	q.push({ 0, 0 });
	visited[0] = true;
	cnt++;
	while (!q.empty()) {
		pair<int, int> now = q.front(); q.pop();
		for (int i = 0; i < graph[now.first].size(); i++) {
			if (now.second < 2 && !visited[graph[now.first][i]]) {
				visited[graph[now.first][i]] = true;
				cnt++;
				q.push({ graph[now.first][i], now.second+1});
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, M, A, B;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		visited.push_back(0);
		graph.push_back(vector<int>());
	}
	while (M--) {
		cin >> A >> B;
		graph[A - 1].push_back(B - 1);
		graph[B - 1].push_back(A - 1);
	}
	BFS();
	cout << cnt - 1;
	return 0;
}