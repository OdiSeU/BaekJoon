#include <iostream>
#include <vector>
using namespace std;

int cnt = -1;

struct Node {
	bool isVisited = false;
	vector<Node*> linked;
};

void searchNode(Node* node) {
	node->isVisited = true;
	cnt++;
	for (int i = 0; i < node->linked.size(); i++) {
		if (!node->linked[i]->isVisited) searchNode(node->linked[i]);
	}
}

int main() {
	int comNum, linkNum;
	cin >> comNum >> linkNum;
	vector<Node> nodes(comNum);
	while (linkNum--) {
		int com1, com2;
		cin >> com1 >> com2;
		nodes[com1 -1].linked.push_back(&nodes[com2 - 1]);
		nodes[com2 - 1].linked.push_back(&nodes[com1 - 1]);
	}
	searchNode(&nodes[0]);
	cout << cnt;
	return 0;
}