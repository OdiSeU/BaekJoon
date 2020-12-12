#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	priority_queue<int, vector<int>, greater<int>> pq;
	int N, num;
	cin >> N;
	while (N--) {
		cin >> num;
		pq.push(num);
	}
	while (!pq.empty()) {
		cout << pq.top() << '\n';
		pq.pop();
	}

	return 0;
}