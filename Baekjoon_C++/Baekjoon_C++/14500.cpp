#include <iostream>
#include <vector>
using namespace std;

struct Tetromino {
	int row, col;
	int vec[4][2];
};

Tetromino tetrominos[] = {
	Tetromino({0, 3, {{0,0}, {0,1}, {0,2}, {0,3}}}),
	Tetromino({3, 0, {{0,0}, {1,0}, {2,0}, {3,0}}}),
	Tetromino({1, 1, {{0,0}, {1,0}, {0,1}, {1,1}}}),
	Tetromino({1, 2, {{0,0}, {0,1}, {0,2}, {1,2}}}),
	Tetromino({1, 2, {{0,0}, {0,1}, {0,2}, {1,0}}}),
	Tetromino({1, 2, {{1,0}, {1,1}, {1,2}, {0,2}}}),
	Tetromino({1, 2, {{0,0}, {1,0}, {1,1}, {1,2}}}),
	Tetromino({2, 1, {{0,0}, {0,1}, {1,1}, {2,1}}}),
	Tetromino({2, 1, {{0,0}, {1,0}, {2,0}, {0,1}}}),
	Tetromino({2, 1, {{0,1}, {1,1}, {2,1}, {2,0}}}),
	Tetromino({2, 1, {{0,0}, {1,0}, {2,0}, {2,1}}}),
	Tetromino({1, 2, {{0,0}, {0,1}, {1,1}, {1,2}}}),
	Tetromino({1, 2, {{1,0}, {1,1}, {0,1}, {0,2}}}),
	Tetromino({2, 1, {{0,0}, {1,0}, {1,1}, {2,1}}}),
	Tetromino({2, 1, {{0,1}, {1,1}, {1,0}, {2,0}}}),
	Tetromino({1, 2, {{1,0}, {1,1}, {0,1}, {1,2}}}),
	Tetromino({1, 2, {{0,0}, {0,1}, {1,1}, {0,2}}}),
	Tetromino({2, 1, {{0,0}, {1,0}, {1,1}, {2,0}}}),
	Tetromino({2, 1, {{0,1}, {1,0}, {1,1}, {2,1}}})
};

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, M, sum, max = 0;
	Tetromino now;
	cin >> N >> M;
	vector<vector<int>> board(N, vector<int>(M));
	for (int i = 0; i < N; i++) for (int j = 0; j < M; j++) cin >> board[i][j];
	for (int r = 0; r < N; r++) {
		for (int c = 0; c < M; c++) {
			for (int i = 0; i < 19; i++) {
				sum = 0;
				now = tetrominos[i];
				if (0 <= r + now.row && r + now.row < N && 0 <= c + now.col && c + now.col < M) {
					for (int x = 0; x < 4; x++) sum += board[r + now.vec[x][0]][c + now.vec[x][1]];
					if (max < sum) max = sum;
				}
			}
		}
	}
	cout << max;
}