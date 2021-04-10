#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> board;
int N, maxLen = 1;

void calcLen(int idx, bool isHrz) {
	char now = ' ';
	int len = 0, r, c;
	for (int i = 0; i < N; i++) {
		r = isHrz ? idx : i;
		c = isHrz ? i : idx;
		if (board[r][c] == now) maxLen = max(maxLen, ++len);
		else {
			now = board[r][c];
			len = 1;
		}
	}
}

int main() {
	cin >> N;
	board.resize(N);
	for (int i = 0; i < N; i++) cin >> board[i];
	for (int i = 0; i < N; i++) { calcLen(i, 1); calcLen(i, 0); }
	for (int r = 0; r < N; r++) {
		for (int c = 0; c < N; c++) {
			if (r < N - 1 && board[r][c] != board[r + 1][c]) {
				swap(board[r][c], board[r + 1][c]);
				calcLen(r, 1); calcLen(r + 1, 1); calcLen(c, 0);
				swap(board[r][c], board[r + 1][c]);
			}
			if (c < N - 1 && board[r][c] != board[r][c + 1]) {
				swap(board[r][c], board[r][c + 1]);
				calcLen(c, 0); calcLen(c + 1, 0); calcLen(r, 1);
				swap(board[r][c], board[r][c + 1]);
			}
		}
	}
	cout << maxLen;
}