#include <iostream>
#include <vector>
using namespace std;

int max_score = 0, N;
int stairs[300], sums[300];


void DFS(int check, int now, int score) {
	score += stairs[now];
	if (now == N - 1) {
		if (score > max_score) max_score = score;
	}
	else if (now == N - 2 || now == N - 3) DFS(0, N - 1, score);
	else {
		DFS(check >> 1, now + 2, score);
		if (check != 3) DFS((check >> 1) | 2, now + 1, score);
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		stairs.push_back(0);
		cin >> stairs[i];
	}
	DFS(0, 0, 0);
	cout << max_score;
	return 0;
}