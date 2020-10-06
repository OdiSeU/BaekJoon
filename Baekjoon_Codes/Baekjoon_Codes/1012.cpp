#include<iostream>
using namespace std;

int row, col;

void checkArea(bool** field, int r, int c) {
	field[r][c] = 0;
	if (r - 1 >= 0 && field[r - 1][c]) {
		checkArea(field, r - 1, c);
	}
	if (c - 1 >= 0 && field[r][c - 1]) {
		checkArea(field, r, c - 1);
	}
	if (r + 1 < row && field[r + 1][c]) {
		checkArea(field, r + 1, c);
	}
	if (c + 1 < col && field[r][c + 1]) {
		checkArea(field, r, c + 1);
	}
}

int main() {
	int testNum;
	cin >> testNum;
	while (testNum--) {
		int cbgNum, cnt = 0;
		cin >> row >> col >> cbgNum;
		bool** field = new bool* [row];
		int** cbgArr = new int* [cbgNum];
		for (int i = 0; i < row; i++) {
			field[i] = new bool[col];
			for (int j = 0; j < col; j++) {
				field[i][j] = 0;
			}
		}
		for (int i = 0; i < cbgNum; i++) {
			cbgArr[i] = new int[2];
			cin >> cbgArr[i][0] >> cbgArr[i][1];
			field[cbgArr[i][0]][cbgArr[i][1]] = 1;
		}
		for (int i = 0; i < cbgNum; i++) {
			if (field[cbgArr[i][0]][cbgArr[i][1]]) {
				cnt++;
				checkArea(field, cbgArr[i][0], cbgArr[i][1]);
			}
		}
		cout << cnt << endl;
	}

	return 0;
}
