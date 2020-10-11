#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Coord {
	int row, col;
	
};

int n, m, roomNum = 2;
vector<vector<int>> maze;
vector<vector<Coord>> rooms;

void DFS(int row, int col, int roomNum) {
	maze[row][col] = roomNum;
	rooms[roomNum - 2].push_back({ row, col });
	if (row - 1 >= 0 && maze[row - 1][col] == 0) DFS(row - 1, col, roomNum);
	if (row + 1 < m && maze[row + 1][col] == 0) DFS(row + 1, col, roomNum);
	if (col - 1 >= 0 && maze[row][col - 1] == 0) DFS(row, col - 1, roomNum);
	if (col + 1 < n && maze[row][col + 1] == 0) DFS(row, col + 1, roomNum);
}

void initMaze() {
	for (int r = 0; r < m; r++) {
		maze.push_back(vector<int>());
		for (int c = 0; c < n; c++) {
			maze[r].push_back(0);
			scanf_s("%1d", &maze[r][c]);
		}
	}
}

void divideMaze() {
	for (int r = 0; r < m; r++) {
		for (int c = 0; c < n; c++) {
			if (maze[r][c] == 0) {
				rooms.push_back(vector<Coord>());
				DFS(r, c, roomNum++);
			}
		}
	}
}

int getWeight(vector<Coord> room1, vector<Coord> room2) {
	int min = n + m;
	for (int i = 0; i < room1.size(); i++) {
		for (int j = 0; j < room2.size(); j++) {
			int dist = abs(room1[i].row - room2[j].row) + abs(room1[i].col - room2[j].col);
			if (dist < min) min = dist;
		}
	}
	return min - 1;
}

vector<vector<int>> getWeightMatrix() {
	vector<vector<int>> weights(rooms.size(), vector<int>(rooms.size(), 0));
	for (int i = 0; i < weights.size(); i++) {
		weights[i][i] = 0;
		for (int j = i + 1; j < weights[i].size(); j++) {
			weights[j][i] = weights[i][j] = getWeight(rooms[i], rooms[j]);
		}
	}
	return weights;
}



int main() {
	cin >> n >> m;

	initMaze();
	divideMaze();
	vector<vector<int>> weights = getWeightMatrix();

	for (int i = 0; i < weights.size(); i++) {
		for (int j = 0; j < weights[i].size(); j++) {
			cout << weights[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}