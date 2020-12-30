#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
	int N, x, y;
	cin >> N;
	while (N--) {
		cin >> x >> y;
		pq.push({ x, y });
	}
	while (!pq.empty()) {
		cout << pq.top().first << ' ' << pq.top().second << '\n';
		pq.pop();
	}
	return 0;
}