#include <iostream>
#include <vector>
#include <queue>
using namespace std;


struct Content {
	char genre;
	float value;
	int row, col, state;
	bool operator< (const Content& cmp) const {
		if (state == cmp.state) {
			if (value == cmp.value) {
				if (row == cmp.row) return col > cmp.col;
				else return row > cmp.row;
			}
			else return value < cmp.value;
		}
		else return state < cmp.state;
	}
};


int main() {
	priority_queue<Content> pq;
	vector<vector<Content>> contents;
	float preferVal[5];
	int rows, cols;
	char data;

	for (int i = 0; i < 5; i++) cin >> preferVal[i];
	cin >> rows >> cols;

	for (int r = 0; r < rows; r++) {
		contents.push_back(vector<Content>());
		for (int c = 0; c < cols; c++) {
			contents[r].push_back({});
			cin >> data;
			switch (data)
			{
			case 'W':
				contents[r][c].state = 0; break;
			case 'O':
				contents[r][c].state = 1; break;
			case 'Y':
				contents[r][c].state = 2; break;
			}
		}
	}

	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < cols; c++) {
			cin >> data;
			contents[r][c].genre = data;
			contents[r][c].value = preferVal[data - 'A'];
			contents[r][c].row = r;
			contents[r][c].col = c;
			if (contents[r][c].state) pq.push(contents[r][c]);
		}
	}

	cout.precision(1);
	cout << fixed;
	while (!pq.empty()) {
		Content now = pq.top(); pq.pop();
		cout << now.genre << ' ' << now.value << ' ';
		cout << now.row << ' ' << now.col << '\n';
	}
	return 0;
}