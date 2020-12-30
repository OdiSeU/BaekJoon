#include <iostream>
#include <queue>
using namespace std;
#define MAX 100001

int main() {
	bool visited[MAX] = { false, };
	queue<pair<int, int>> q;
	int N, K;
	cin >> N >> K;
	q.push({ 0, N });
	while (!q.empty()) {
		if (q.front().second == K) break;
		pair<int, int> now = q.front();
		if (now.second > 0 && !visited[now.second - 1]) {
			q.push({ now.first + 1, q.front().second - 1 });
			visited[now.second - 1] = true;
		}
		if (now.second + 1 < MAX && !visited[now.second + 1]) {
			q.push({ now.first + 1, q.front().second + 1 });
			visited[now.second + 1] = true;
		}
		if (now.second * 2 < MAX && !visited[now.second * 2]) {
			q.push({ now.first + 1, q.front().second * 2 });
			visited[now.second * 2] = true;
		}
		q.pop();
	}
	cout << q.front().first;
	return 0;
}