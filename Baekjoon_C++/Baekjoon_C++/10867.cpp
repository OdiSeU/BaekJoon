#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, num, last = 0;
	cin >> N;
	priority_queue<int, vector<int>, greater<int>> pq;
	while (N--) {
		cin >> num;
		pq.push(num);
	}
	while (!pq.empty()) {
		num = pq.top(); pq.pop();
		if (num != last) cout << num << ' ';
		last = num;
	}
	return 0;
}