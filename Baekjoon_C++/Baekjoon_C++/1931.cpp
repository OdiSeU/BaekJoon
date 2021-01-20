#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, cnt = 0, now = 0;
	cin >> N;
	vector<pair<int, int>> confs(N);
	for (int i = 0; i < N; i++) {
		cin >> confs[i].second >> confs[i].first;
	}
	sort(confs.begin(), confs.end());
	for (int i = 0; i < N; i++) {
		if (confs[i].second >= now) {
			cnt++;
			now = confs[i].first;
		}
	}
	cout << cnt;
	return 0;
}