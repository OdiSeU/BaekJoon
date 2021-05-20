#include <iostream>
using namespace std;

int N, M, seq[7];

void solution(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) cout << seq[i] << ' ';
		cout << '\n';
	}
	else {
		for (int i = 1; i <= N; i++) {
			seq[cnt] = i;
			solution(cnt + 1);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	cin >> N >> M;
	solution(0);
}