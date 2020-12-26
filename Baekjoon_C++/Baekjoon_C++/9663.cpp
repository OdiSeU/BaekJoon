#include <iostream>
#include <vector>
using namespace std;
int N, cnt = 0;
int hist[14];

bool isPossible(int row, int col) {
	bool possible = true;
	for (int i = 0; i < row; i++) {
		if (hist[i] == col || hist[i] + (row - i) == col || hist[i] - (row - i) == col) {
			possible = false;
			break;
		}
	}
	return possible;
}

void nQueen(int row) {
	if (row == N) {
		cnt++;
		return;
	}
	for (int c = 0; c < N; c++) {
		if (isPossible(row, c)) {
			hist[row] = c;
			nQueen(row + 1);
		}
	}
}

int main() {
	cin >> N;
	nQueen(0);
	cout << cnt;
	return 0;
}