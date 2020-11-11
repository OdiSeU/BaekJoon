#include <iostream>
#include <string>
using namespace std;
int towers[500000][2];
int last = -1;

int insertTower(int n, int idx) {
	bool isFirst = true;
	for (int i = last; i >= 0; i--) {
		if (towers[i][0] > n) {
			isFirst = false;
			last = ++i;
			towers[i][0] = n;
			towers[i][1] = idx;
			break;
		}
	}
	if (isFirst) {
		last = 0;
		towers[last][0] = n;
		towers[last][1] = idx;
	}
	return last == 0 ? 0 : towers[last - 1][1];
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, idx = 0;
	string input, num;
	cin >> N;
	getline(cin, input);
	getline(cin, input);
	for (int i = 0; i < N; i++) {
		num = "";
		if (input[idx] == ' ') idx++;
		while (idx < input.size() && input[idx] != ' ') num += input[idx++];
		cout << insertTower(stoi(num), i+1) << ' ';
	}
	return 0;
}