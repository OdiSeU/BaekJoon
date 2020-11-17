#include <iostream>
#include <vector>

#define MAX 100
using namespace std;

char map[MAX][MAX];
bool visited[MAX][MAX];

void initVisited() {
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			visited[i][j] = 0;
		}
	}
}

int BFS(bool isSick) {
	int cnt = 0;
	initVisited();
	return cnt;
}

int main() {

	return 0;
}
