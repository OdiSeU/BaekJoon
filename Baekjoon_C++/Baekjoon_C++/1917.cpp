#include <iostream>
#include <queue>

class Dice {
private:
	bool check[6] = { false, };
	int status[6][4] = {
	    //U, L, D, R
		{5, 3, 2, 4}, //1
		{1, 3, 6, 4}, //2
		{5, 6, 2, 4}, //3
		{5, 1, 2, 6}, //4
		{6, 3, 1, 4}, //5
		{2, 3, 5, 4}  //6
	};

public:
	int map[6][6];
	bool scanExView(int r, int c, int now) {
		if (check[now - 1]) return false;
		map[r][c] = now;
		check[now - 1] = true;
		int idx1 = -1, idx2 = 0;
		int* adj[4] = { NULL, };
		int vx[] = { 0, -1, 0, 1 };
		int vy[] = { -1, 0, 1, 0 };

		if (r > 0)if (map[r - 1][c] != 0) {
			adj[0] = &map[r - 1][c];
			if(*adj[0] != -1) idx1 = 0;
		}
		if (c > 0)if (map[r][c - 1] != 0) {
			adj[1] = &map[r][c - 1];
			if (*adj[1] != -1) idx1 = 1;
		}
		if (r + 1 < 6)if (map[r + 1][c] != 0) {
			adj[2] = &map[r + 1][c];
			if (*adj[2] != -1) idx1 = 2;
		}
		if (c + 1 < 6)if (map[r][c + 1] != 0) {
			adj[3] = &map[r][c + 1];
			if (*adj[3] != -1) idx1 = 3;
		}

		if (idx1 != -1) {
			for (int i = 0; i < 3; i++)
			{
				if (*adj[idx1] == status[now - 1][idx2]) break;
				else  idx2 = (idx2 + 1) % 4;
			}
		} else idx1 = 0;

		for (int i = 0; i < 4; i++) {
			if (adj[idx1] != NULL && *adj[idx1] == -1)
				scanExView(r + vy[idx1], c + vx[idx1], status[now - 1][idx2]);
			idx1 = (idx1 + 1) % 4;
			idx2 = (idx2 + 1) % 4;
		}
		bool ans = true;
		for (int i = 0; i < 6; i++) {
			if (!check[i]) ans = false;
		}
		return ans;
	}
};

int main() {
	for (int n = 0; n < 3; n++) {
		Dice dice;
		int row = -1, col = -1;
		for (int r = 0; r < 6; r++) {
			for (int c = 0; c < 6; c++) {
				int input;
				scanf_s("%d", &input);
				if (row == -1 && col == -1) {
					if (input == 1) {
						row = r; col = c;
					}
				}
				dice.map[r][c] = -input;
			}
		}
		if (dice.scanExView(row, col, 1)) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}