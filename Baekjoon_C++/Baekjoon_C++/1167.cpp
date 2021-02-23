#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node { int num, cost; };

Node getFarthest(vector<vector<Node>> tree, int from) {
	Node farthest = { from, 0 };
	vector<bool> visited(tree.size() , 0);
	queue<Node> q;
	visited[from] = 1;
	q.push(farthest);
	while (!q.empty()) {
		Node now = q.front(); q.pop();
		for (int i = 0; i < tree[now.num].size(); i++) {
			Node next = tree[now.num][i];
			if (!visited[next.num]) {
				visited[next.num] = 1;
				next.cost += now.cost;
				if (next.cost > farthest.cost) farthest = next;
				q.push(next);
			}
		}
	}
	return farthest;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int V, from, to, cost;
	cin >> V;
	vector<vector<Node>> tree(V);
	for (int i = 0; i < V; i++) {
		cin >> from;
		while (true) {
			cin >> to;
			if (to == -1) break;
			cin >> cost;
			tree[from - 1].push_back({ to - 1, cost });
		}
	}
	Node n1 = getFarthest(tree, 0);
	Node n2 = getFarthest(tree, n1.num);
	cout << n2.cost;
}