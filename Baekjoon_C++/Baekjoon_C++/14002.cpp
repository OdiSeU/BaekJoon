#include <iostream>
#include <vector>
using namespace std;

struct Node { int n = 0, cnt = 1; Node* bf = NULL; };

void printSeq(Node* now) {
	if (now->bf != NULL) printSeq(now->bf);
	cout << now->n << ' ';
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N;
	cin >> N;
	vector<Node> memoi(N);
	Node* max = &memoi[0];

	for (int i = 0; i < N; i++) {
		cin >> memoi[i].n;
		for (int j = 0; j <= i; j++) {
			if (memoi[j].n < memoi[i].n && memoi[i].cnt <= memoi[j].cnt) {
				memoi[i].cnt = memoi[j].cnt + 1;
				memoi[i].bf = &memoi[j];
				if (max->cnt < memoi[i].cnt) max = &memoi[i];
			}
		}
	}
	cout << max->cnt << '\n';
	printSeq(max);
}