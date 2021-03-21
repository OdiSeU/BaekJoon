#include <iostream>
#include <string>
#include <vector>
using namespace std;

int min(int a, int b) { return a < b ? a : b; }

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int rows, cols, now, up, max = 0;
	cin >> rows >> cols;
	string s;
	vector<vector<int>> memoi(2, vector<int>(cols));
	for (int r = 0; r < rows; r++) {
		cin >> s;
		for (int c = 0; c < cols; c++) {
			up = (r - 1) & 1;
			now = s[c] - '0';
			if (now && 0 < r && 0 < c) {
				now = min(min(memoi[up][c], memoi[r & 1][c - 1]), memoi[up][c - 1]) + 1;
			}
			memoi[r & 1][c] = now;
			if (max < now) max = now;
		}
	}
	cout << max * max;
}