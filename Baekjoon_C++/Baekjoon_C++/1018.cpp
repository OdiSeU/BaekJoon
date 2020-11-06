#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m, cnt = 0, min, max;
	bool startState = 0;
	cin >> n >> m;
	min = max = n * m;
	vector<vector<bool>> board(n, vector<bool>(m));
	vector<vector<int>> changeNum(n, vector<int>(m - 7, 0));
	vector<int> rowSum(m - 7, 0);
	
	for (int i = 0; i < n; i++,startState = !startState, cnt = 0) {
		bool state = startState;
		for (int j = 0; j < m; j++, state = !state) {
			char input; cin >> input;
			input = input == 'W';

			if (input == state) {
				board[i][j] = 0;
			}
			else {
				board[i][j] = 1;
				cnt++;
			}
			if (j >= 7) {
				if (j - 8 >= 0) cnt -= board[i][j - 8];
				changeNum[i][j - 7] = cnt;
				rowSum[j - 7] += cnt;
				if (i >= 7) {
					if (i - 8 >= 0) rowSum[j - 7] -= changeNum[i - 8][j - 7];
					int smaller = rowSum[j - 7] < 64 - rowSum[j - 7] ? rowSum[j - 7] : 64 - rowSum[j - 7];
					if (min > smaller) min = smaller;
				}
			}
		}
	}

	cout << min;
	return 0;
}