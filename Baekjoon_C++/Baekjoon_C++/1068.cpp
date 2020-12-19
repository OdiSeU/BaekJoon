#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Tree {
	struct Node {
		 int parent = NULL;
		 int idx = 0;
		vector<int> childs;
	};
private:
	vector<Node> nodes;

public:
	void push(int parent) {
		if (parent == -1) nodes.push_back({ NULL, 0 });
		else {
			nodes.push_back({ parent, (int)nodes.size() - 1 });
			nodes[parent].childs.push_back(nodes.size() - 1);
		}
	}
	void erase(int idx) {
		nodes[nodes[idx].parent].idx = -1;
		vector< int>* childNodes = &nodes[nodes[idx].parent].childs;
		for (int i = 0; i < childNodes->size(); i++) {
			if (childNodes->at(i) == idx) {
				childNodes->at(i) = -1;
				break;
			}
		}
	}
	int getLeafNum() {
		int cnt = 0;
		queue<Node> q;
		if(nodes[0].idx >= 0)q.push(nodes[0]);
		while (!q.empty()) {
			bool added = false;
			for (int i = 0; i < q.front().childs.size(); i++) {
				if (q.front().childs[i] > 0) {
					q.push(nodes[q.front().childs[i]]);
					added = true;
				}
			}
			if (!added) cnt++;
			q.pop();
		}
		return cnt;
	}
};

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	Tree tree;
	int N, parent, del;
	cin >> N;
	while (N--) {
		cin >> parent;
		tree.push(parent);
	}
	cin >> del;
	tree.erase(del);
	cout << tree.getLeafNum();
	return 0;
}