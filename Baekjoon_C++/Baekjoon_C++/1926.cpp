#include<iostream>
#include<vector>
using namespace std;

int pics = 0, cnt = 0;
vector<vector<int>> map;

void DFS(int r, int c) {
	map[r][c] = 0;
	cnt++;
	if (r - 1 >= 0 && map[r - 1][c]) {
		DFS(r - 1, c);
	}
	if (c - 1 >= 0 && map[r][c - 1]) {
		DFS(r, c - 1);
	}
	if (r + 1 < map.size() && map[r + 1][c]) {
		DFS(r + 1, c);
	}
	if (c + 1 < map[0].size() && map[r][c + 1]) {
		DFS(r, c + 1);
	}
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int row, col, max = 0;
	cin >> row >> col;
	vector<pair<int, int>> pos;
	for (int i = 0; i < row; i++) {
		map.push_back(vector<int>());
		for (int j = 0; j < col; j++) {
			map[i].push_back(0);
			pos.push_back({ i, j });
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < pos.size(); i++) {
		if (map[pos[i].first][pos[i].second]) {
			pics++;
			cnt = 0;
			DFS(pos[i].first, pos[i].second);
			if (cnt > max) max = cnt;
		}
	}
	cout << pics << '\n' << max;
	return 0;
}