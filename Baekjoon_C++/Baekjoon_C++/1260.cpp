#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node {
	bool visited = false;
	priority_queue<int, vector<int>, greater<int>> nexts;
};

vector<Node> nodes1, nodes2;
int i, j;

void BFS(int idx) {
	queue<int> q;
	Node now;
	q.push(idx);
	nodes1[idx].visited = true;
	while (!q.empty()) {
		cout << q.front()+1 << ' ';
		if (--j == 0) break;
		while (!nodes1[q.front()].nexts.empty()) {
			int next = nodes1[q.front()].nexts.top();
			nodes1[q.front()].nexts.pop();
			if (!nodes1[next].visited) {
				q.push(next);
				nodes1[next].visited = true;
			}
		}
		q.pop();
	}
}

void DFS(int idx) {
	nodes2[idx].visited = true;
	cout << idx+1 << ' ';
	if (--i == 0) return;
	while (!nodes2[idx].nexts.empty()) {
		if (!nodes2[nodes2[idx].nexts.top()].visited) DFS(nodes2[idx].nexts.top());
		nodes2[idx].nexts.pop();
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, M, V, i, j;
	cin >> N >> M >> V;
	for (int k = 0; k < N; k++) {
		nodes1.push_back(Node());
		nodes2.push_back(Node());
	}
	for (int k = 0; k < M; k++) {
		cin >> i >> j;
		nodes1[i - 1].nexts.push(j - 1);
		nodes1[j - 1].nexts.push(i - 1);
		nodes2[i - 1].nexts.push(j - 1);
		nodes2[j - 1].nexts.push(i - 1);
	}
	i = j = N;
	DFS(V - 1);
	cout << '\n';
	BFS(V - 1);
}