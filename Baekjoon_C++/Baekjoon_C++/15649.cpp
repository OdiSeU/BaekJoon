#include <iostream>
using namespace std;
int N, M, seq[8];
bool visited[8];

void solution(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) cout << seq[i] << ' ';
		cout << '\n';
	}
	for (int i = 0; i < N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			seq[cnt] = i + 1;
			solution(cnt + 1);
			visited[i] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	cin >> N >> M;
	solution(0);
}