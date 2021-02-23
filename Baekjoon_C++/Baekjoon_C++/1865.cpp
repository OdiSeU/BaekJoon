#include <iostream>
#include <vector>
#include <deque>
using namespace std;

struct Node { int num; float cost; };

bool canGoPast(vector<vector<Node>> tree) {
	for (int i = 0; i < tree.size(); i++) {
		vector<float> visited(tree.size(), INFINITY);
		if (visited[i] != INFINITY) continue;
		Node now = { i, 0 }, next;
		deque<Node> q;
		q.push_back(now);
		visited[i] = 0;
		while (!q.empty()) {
			now = q.front(); q.pop_front();
			cout << "now : " << now.num << ' ' << now.cost << '\n';
			for (int j = 0; j < tree[now.num].size(); j++) {
				next = tree[now.num][j];
				next.cost += now.cost;
				cout << "next : " << next.num << ' ' << next.cost << '\n';
				if (visited[next.num] == INFINITY) {
					visited[next.num] = next.cost;
					q.push_front(next);
				}
				else if (visited[next.num] > next.cost) return true;
			}
		}
	}
}

int main() {
	int TC, N, M, W, S, E;
	float T;
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