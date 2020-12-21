#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;


int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	string word, first;
	int R, C;
	cin >> R >> C;
	vector<string> puzzle(R);
	for (int i = 0; i < R; i++) cin >> puzzle[i];

	for (int r = 0; r < R; r++) {
		word = "";
		for (int c = 0; c <= C; c++) {
			if (c == C || puzzle[r][c] == '#') {
				if (word.length() > 1) {
					if (first.empty()) first = word;
					else if (word < first) first = word;
				}
				word = "";
			}
			else {
				word += puzzle[r][c];
			}
		}
	}

	for (int c = 0; c < C; c++) {
		word = "";
		for (int r = 0; r <= R; r++) {
			if (r == R || puzzle[r][c] == '#') {
				if (word.length() > 1) {
					if (first.empty()) first = word;
					else if (word < first) first = word;
				}
				word = "";
			}
			else {
				word += puzzle[r][c];
			}
		}
	}
	cout << first;

	return 0;
}