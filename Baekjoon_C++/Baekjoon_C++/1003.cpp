#include <iostream>
#include <vector>
using namespace std;

vector<int> memo = { 1, 0 };

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        while (N + 1>= memo.size()) memo.push_back(memo[memo.size()-2] + memo[memo.size()-1]);
        cout << memo[N]<< ' ' << memo[N + 1] << '\n';
    }
	return 0;
}