#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	string s;
	int N, total = 0, cnt;
	cin >> N;
	vector<int> counts;
	vector<string> space(N);
	for (int i = 0; i < N; i++) cin >> space[i];
	for (int n = 1; n <= N; n++) {
		cnt = 0;
		for (int r = 0; r <= N - n; r++) {
			for (int c = 0; c <= N - n; c++) {
				bool check = true;
				for (int a = 0; a < n; a++) {
					for (int b = 0; b < n; b++) {
						if (space[r + a][c + b] == '0') {
							check = false;
							break;
						}
					}
					if (!check) break;
				}
				if (check) cnt++;
			}
		}
		if (cnt == 0) break;
		counts.push_back(cnt);
		total += cnt;
	}

	cout << "total: " << total << '\n';
	for (int i = 0; i < counts.size(); i++)
		cout << "size[" << i + 1 << "]: " << counts[i] << '\n';
	return 0;
}