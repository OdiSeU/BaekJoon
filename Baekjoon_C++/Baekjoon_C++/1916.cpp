#include <iostream>
#include <vector>
#include <queue>
#define INF 987654321
using namespace std;

struct Node {
	int num, cost;
	bool operator< (const Node& cmp) const {
		if (cost == cmp.cost) return num > cmp.num;
		else return cost > cmp.cost;
	}
};

int dijkstra(vector<vector<Node>>& graph, int from, int to) {
	vector<int> dist(graph.size(), INF);
	priority_queue<Node> pq;
	dist[from] = 0;
	pq.push({ from, 0 });
	while (!pq.empty()) {
		Node now = pq.top(); pq.pop();
		if (dist[now.num] < now.cost) continue;
		for (const auto& next : graph[now.num]) {
			if (now.cost + next.cost < dist[next.num]) {
				dist[next.num] = now.cost + next.cost;
				pq.push({ next.num, dist[next.num] });
			}
		}
	}
	return dist[to];
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, M, from, to, cost;
	cin >> N >> M;
	vector<vector<Node>> graph(N);
	while (M--) {
		cin >> from >> to >> cost;
		graph[from - 1].push_back({ to - 1, cost });
	}
	cin >> from >> to;
	cout << dijkstra(graph, from - 1, to - 1);
}