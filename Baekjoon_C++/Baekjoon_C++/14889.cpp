#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int N, ans = 123456789;
vector<int> r;
vector<int> c;

void bt(int cnt, int last, int diff) {
	if(cnt == N/2) ans = min(ans, abs(diff));
	for (int i = last + 1; i < N; i++) bt(cnt + 1, i, diff - r[i] - c[i]);
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int cost, total = 0;
	cin >> N;
	r.resize(N); c.resize(N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> cost;
			r[i] += cost;
			c[j] += cost;
			total += cost;
		}
	}
	bt(0, -1, total);
	cout << ans;
}