#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int N, M;
bool visited[8];
vector<int> num;

void solution(int cnt, string seq) {
	if (cnt == M) {
		cout << seq << '\n';
	}
	else {
		for (int i = 0, last = 0; i < N; i++) {
			if (num[i] != last && !visited[i]) {
				visited[i] = true;
				solution(cnt + 1, seq + to_string(num[i]) + " ");
				visited[i] = false;
				last = num[i];
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int idx;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		num.push_back(0);
		cin >> num[i];
	}
	sort(num.begin(), num.end());
	solution(0, "");
}