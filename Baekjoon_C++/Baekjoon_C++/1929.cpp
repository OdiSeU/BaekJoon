#include <iostream>
#include <vector>
using namespace std;

int main() {
	int M, N;
	cin >> M >> N;
	vector<bool> seive(N + 1, 0);
	seive[1] = 1;
	for (int i = 2; i * i <= N; i++)
		if (!seive[i])
			for (int j = i * i; j <= N; j += i)
				seive[j] = 1;
	for (int i = M; i <= N; i++)
		if (!seive[i]) cout << i << '\n';
}