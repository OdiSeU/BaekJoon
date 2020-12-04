#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> q;
	int N, K;
	cin >> N >> K;
	cout << '<';
	for (int i = 1; i <= N; i++) q.push(i);
	while (true) {
		for (int i = 1; i < K; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		q.pop();
		if (!q.empty()) cout << ", ";
		else break;
	}
	cout << '>';
	return 0;
}