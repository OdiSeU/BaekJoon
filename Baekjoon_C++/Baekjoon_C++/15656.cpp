#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M, seq[7];
vector<int> num;

void solution(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) cout << seq[i] << ' ';
		cout << '\n';
	}
	else {
		for (int i = 0; i < N; i++) {
			seq[cnt] = num[i];
			solution(cnt + 1);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int idx;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		num.push_back(0);
		cin >> num[i];
	}
	sort(num.begin(), num.end());
	solution(0);
}