#include <iostream>
#define MAX 100000
#define MOD 1000000009
using namespace std;
int memoi[MAX][3] = { { 1, 0, 0 }, { 0, 1, 0 }, { 1, 1, 1 } };

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	for (int i = 3; i < MAX; i++) {
		memoi[i][0] = (memoi[i - 1][1] + memoi[i - 1][2]) % MOD;
		memoi[i][1] = (memoi[i - 2][0] + memoi[i - 2][2]) % MOD;
		memoi[i][2] = (memoi[i - 3][0] + memoi[i - 3][1]) % MOD;
	}
	int T, n;
	cin >> T;
	while (T--) {
		cin >> n;
		n--;
		cout << ((long long)memoi[n][0] + memoi[n][1] + memoi[n][2]) % MOD << '\n';
	}
}