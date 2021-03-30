#include <iostream>
#include <vector>
using namespace std;
int color[] = { 0, 0 };
int dx[] = { 0, 1, 0, 1 };
int dy[] = { 0, 0, 1, 1 }; 
vector<vector<short>> paper;

bool dividePaper(int row, int col, int n) {
	if (!n) return false;
	bool isDivide = false;
	int cnt[] = { 0, 0 }, r, c;
	for (int i = 0; i < 4; i++) {
		r = row + dy[i] * n;
		c = col + dx[i] * n;
		if (!dividePaper(r, c, n / 2)) cnt[paper[r][c]]++;
	}
	if (cnt[0] != 4  && cnt[1] != 4) {
		isDivide = true;
		color[0] += cnt[0];
		color[1] += cnt[1];
	}
	return isDivide;
}


int main() {
	int N;
	cin >> N;
	for (int r = 0; r < N; r++) {
		paper.push_back(vector<short>(N));
		for (int c = 0; c < N; c++) cin >> paper[r][c];
	}
	if (!dividePaper(0, 0, N/2)) color[paper[0][0]]++;
	cout << color[0] << '\n' << color[1];
}