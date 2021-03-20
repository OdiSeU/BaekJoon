#include <iostream>
#define MOD 1000000009
using namespace std;
int memoi[1000001];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int T, n;
	cin >> T;
	memoi[1] = 1;
	memoi[2] = 2;
	memoi[3] = 4;
	for (int i = 4; i < 1000001; i++) {
		memoi[i] = ((memoi[i - 1] + memoi[i - 2]) % MOD + memoi[i - 3]) % MOD;
	}
	while (T--) {
		cin >> n;
		cout << memoi[n] << '\n';
	}
}