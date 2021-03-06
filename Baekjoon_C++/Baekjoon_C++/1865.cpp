#include <iostream>
#include <vector>
#define INF 987654321
using namespace std;

struct Node { int num, cost; };

bool bellmanFord(vector<vector<Node>>& graph) {
	int len = graph.size();
	vector<int> dist(len, INF);
	Node now;
	dist[0] = 0;
	for (int _ = 0; _ < len; _++) {
		for (int i = 0; i < len; i++) {
			now = { i, dist[i] };
			if (now.cost == INF) continue;
			for (const auto& next : graph[i]) {
				if (now.cost + next.cost < dist[next.num]) {
					dist[next.num] = now.cost + next.cost;
				}
			}
		}
	}
	for (int i = 0; i < len; i++) {
		now = { i, dist[i] };
		for (const auto& next : graph[i]) {
			if (now.cost + next.cost < dist[next.num]) {
				return true;
			}
		}
	}
	return false;
}

int main() {
	int TC, N, M, W, S, E, T;
	cin >> TC;
	while (TC--) {
		cin >> N >> M >> W;
		vector<vector<Node>> graph(N);
		while (M--) {
			cin >> S >> E >> T;
			graph[S - 1].push_back({ E - 1, T });
			graph[E - 1].push_back({ S - 1, T });
		}
		while (W--) {
			cin >> S >> E >> T;
			graph[S - 1].push_back({ E - 1, -T });
		}
		cout << (bellmanFord(graph) ? "YES" : "NO") << '\n';
	}
}