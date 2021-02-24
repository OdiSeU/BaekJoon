#include <iostream>
#include <vector>
#include <deque>
#define INF 2147483647
using namespace std;

struct Node { int num, cost; };

bool DFS(vector<vector<Node>>& tree, vector<int>& visited, Node now) {
	for (int i = 0; i < tree[now.num].size(); i++) {
		Node next = tree[now.num][i];
		next.cost += now.cost;
		if (visited[next.num] == INF) {
			visited[next.num] = next.cost;
			if (DFS(tree, visited, next)) return true;
			visited[next.num] = INF;
		}
		else if (visited[next.num] > next.cost) return true;
	}
	return false;
}

bool canGoPast(vector<vector<Node>>& tree) {
	vector<int> visited(tree.size(), INF);
	for (int i = 0; i < tree.size(); i++) {
		visited[i] = 0;
		if (DFS(tree, visited, { i, 0 })) return true;
		visited[i] = INF;
	}
	return false;
}

int main() {
	int TC, N, M, W, S, E, T;
	cin >> TC;
	while (TC--) {
		cin >> N >> M >> W;
		vector<vector<Node>> tree(N);
		while (M--) {
			cin >> S >> E >> T;
			tree[S - 1].push_back({ E - 1, T });
		}
		while (W--) {
			cin >> S >> E >> T;
			tree[S - 1].push_back({ E - 1, -T });
		}
		cout << (canGoPast(tree) ? "YES" : "NO") << '\n';
	}
}