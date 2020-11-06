#include <iostream>
#include <vector>
#include <random>
#include <time.h>
using namespace std;
vector<vector<bool>> mine;
int  row, col, diaSize = 0;

bool checkPossible(int r, int c, int size) {
	int nextRow = r + (size-1) * 2, leftCol = c, rightCol = c;
	if (nextRow >= row) return false;
	while (--size) {
		if (!mine[nextRow][leftCol] || !mine[nextRow][rightCol]) return false;
		nextRow--; leftCol--; rightCol++;
		if (leftCol < 0 || rightCol >= col) return false;
	}
	return true;
}

void findDiamond(int r, int c) {
	int check = 0;
	int nextRow = r, leftCol = c, rightCol = c;
	do {
		if (mine[nextRow][leftCol] && mine[nextRow][rightCol]) {
			printf("isLR : %d, %d, %d, %d\n", r, c, leftCol, rightCol);
			if (diaSize < ++check) {
				printf("check : %d, %d\n", r, c);
				if (checkPossible(r, c, check)) {
					diaSize = check;
					printf("update : %d, %d\n", r, c);
				}
			}
		}
		else return;
		nextRow++; leftCol--; rightCol++;
	} while (nextRow < row && leftCol >= 0 && rightCol < col);
}

int main() {
	//scanf_s("%d%d", &row, &col);
	row = 30; col = 30;
	srand((int)time(NULL));
	for (int i = 0; i < row; i++) {
		mine.push_back(vector<bool>());
		for (int j = 0; j < col; j++) {
			int input;
			//scanf_s("%1d", &input);
			input = rand() % 2;
			mine[i].push_back(input);
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%c ", mine[i][j]==0?' ':'X');
		}
		printf("\n");
	}
	for (int i = 0; i < row - diaSize; i++) {
		for (int j = 0; j < col - (diaSize -1) * 2; j++) {
			findDiamond(i, j);
		}
	}
	printf("%d", diaSize);
	return 0;
}