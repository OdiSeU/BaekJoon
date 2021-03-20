#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node {
	int row, col, mv;
};

int dx[] = { -1, 0, 1 };
int dy[] = { 0, 1, 0 };
int dm[] = { 1, 0, 1 };

int main() {
	vector<vector<char>> screen;
	queue<Node> q;
	Node now = { 0, 0, 0 }, next;
	int rows, cols;
	char info;
	cin >> cols >> rows;
	for (int r = 0; r < rows; r++) {
		screen.push_back(vector<char>());
		for (int c = 0; c < cols; c++) {
			cin >> info;
			screen[r].push_back(info);
			if (info == 'c') q.push({ r, c, 0 });
		}
	}
	while (!q.empty()) {
		now = q.front(); q.pop();
		if (now.row == rows - 1) break;
		for (int i = 0; i < 3; i++) {
			next = { now.row + dy[i], now.col + dx[i], now.mv + dm[i]};
			if (0 <= next.row && next.row < rows && 0 <= next.col && next.col < cols) {
				if (screen[next.row][next.col] == '.') {
					screen[next.row][next.col] = 'x';
					q.push(next);
				}
			}
		}
	}
	if (now.row == rows - 1) cout << now.mv << '\n';
	else cout << -1 << '\n';
}