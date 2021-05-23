#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
int N, M, num;
set<int> nums;

void solution(int cnt, string seq) {
	if (cnt == M) {
		cout << seq << '\n';
		return;
	}
	for (auto it = nums.begin(); it != nums.end(); it++) {
		solution(cnt + 1, seq + to_string(*it) + " ");
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	cin >> N >> M;
	while (N--) {
		cin >> num;
		nums.insert(num);
	}
	solution(0, "");
}