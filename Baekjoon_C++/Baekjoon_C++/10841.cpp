#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, age;
	string name;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	cin >> N;
	vector<string> member(N);
	for (int i = 0; i < N; i++) {
		cin >> age >> name;
		member[i] = name;
		pq.push({ age, i });
	}
	while (!pq.empty()) {
		pair<int, int> now = pq.top(); pq.pop();
		cout << now.first << ' ' << member[now.second] << '\n';
	}
	return 0;
}