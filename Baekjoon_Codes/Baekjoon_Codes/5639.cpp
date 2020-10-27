#include <iostream>

class BTree {
private:
	struct Node {
		int key = 0;
		Node* left = NULL;
		Node* right = NULL;
	};
public:
	Node* root;
	BTree() {
		root = new Node;
	}
	void push(Node*now, int v) {
		if (now->key == 0) {
			now->key = v;
			return;
		}
		if (now->key < v) {
			if (now->right == NULL) now->right = new Node;
			push(now->right, v);
		}
		else {
			if (now->left == NULL) now->left = new Node;
			push(now->left, v);
		}
	}
	void postorder(Node* now) {
		if (now->left) postorder(now->left);
		if (now->right) postorder(now->right);
		printf("%d\n", now->key);
	}
};

int main() {
	std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);
	BTree bTree;
	int input;
	while (std::cin>> input) bTree.push(bTree.root, input);
	bTree.postorder(bTree.root);

	return 0;
}