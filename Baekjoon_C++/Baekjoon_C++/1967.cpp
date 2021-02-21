#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node { int num, cost; };

Node getFarthest(vector<vector<Node>> tree, int from) {
	vector<bool> visited(tree.size(), 0);
	Node farthest = {from, 0};
	queue<Node> q;
	q.push({from, 0});
	visited[from] = 1;
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
	int n, from, to, cost;
	cin >> n;
	vector<vector<Node>> tree(n);
	while (--n) {
		cin >> from >> to >> cost;
		tree[from - 1].push_back({ to - 1, cost });
		tree[to - 1].push_back({ from - 1, cost });
	}
	Node n1 = getFarthest(tree, 0);
	Node n2 = getFarthest(tree, n1.num);
	cout << n2.cost << '\n';
}