#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int maxCnt = 0;
vector<int> cnts;
vector<vector<int>> graph;

void DFS(vector<bool> &visited, int idx, int *cnt) {
	visited[idx] = true;
	if (++(*cnt) > maxCnt) maxCnt = *cnt;
	for (int i = 0; i < graph[idx].size(); i++) {
		if (!visited[graph[idx][i]]) DFS(visited, graph[idx][i], cnt);
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, M, A, B;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cnts.push_back(0);
		graph.push_back(vector<int>());
	}
	while (M--) {
		cin >> A >> B;
		graph[B - 1].push_back(A - 1);
	}
	for (int i = 0; i < N; i++) {
		vector<bool> visited(N, 0);
		DFS(visited, i, &cnts[i]);
	}
	for (int i = 0; i < N; i++) {
		if (cnts[i] == maxCnt) cout << i+1 << ' ';
	}
	return 0;
}