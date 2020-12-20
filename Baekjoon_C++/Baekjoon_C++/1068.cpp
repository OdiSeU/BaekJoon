#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<Node> nodes;

struct Node {
	int parent = -1;
	int idx = 0;
	vector<Node*> childs;
};

void push(int parent) {
	if (parent == -1) nodes.push_back({ -1, 0 , NULL});
}

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