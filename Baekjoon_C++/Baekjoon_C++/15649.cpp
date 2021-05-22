#include <iostream>
#include <string>
using namespace std;
int N, M;
bool visited[8];

void solution(int cnt, string seq) {
	if (cnt == M) {
		cout << seq << '\n';
	}
	for (int i = 0; i < N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			solution(cnt + 1, seq + to_string(i+1) + " ");
			visited[i] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	cin >> N >> M;
	solution(0, "");
}