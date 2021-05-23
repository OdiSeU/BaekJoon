#include <iostream>
#include <string>
using namespace std;

int N, M, seq[7];

void solution(int cnt, string seq) {
	if (cnt == M) cout << seq << '\n';
	else for (int i = 1; i <= N; i++) solution(cnt + 1, seq + to_string(i) + " ");
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	cin >> N >> M;
	solution(0, "");
}