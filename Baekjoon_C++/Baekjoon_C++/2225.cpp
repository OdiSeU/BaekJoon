#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	vector<int> memoi(N+1, 1);
	for (int i = 1; i < K; i++) for (int j = 1; j <= N; j++) {
		memoi[j] = (memoi[j - 1] + memoi[j]) % 1000000000;
	}
	cout << memoi[N];
}
