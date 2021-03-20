#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main() {
	int rows, cols, up, left;
	cin >> cols >> rows;
	vector<vector<int>> memoi(rows, vector<int>(cols, 0));
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < cols; c++) {
			up = left = 0;
			cin >> memoi[r][c];
			if (0 < r) up = memoi[r - 1][c];
			if (0 < c) left = memoi[r][c - 1];
			memoi[r][c] += max(up, left);
		}
	}
	cout << memoi[rows - 1][cols - 1] << '\n';
	return 0;
}